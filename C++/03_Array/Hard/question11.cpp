--------------------------------------------------------------Brute-------------------------------------------------------------
class Solution {
public:
    int reversePairs(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(i<j&&(long long)nums[i] >(long long) 2 * nums[j]){
                    count++;
                }
            }
        }
        return count;
    }
};
----------------------------------------------------------Better----------------------------------------------------------------
class Solution {
public:
    int merge(vector<int>& arr, int low, int mid, int high) {
        vector<int> temp;    // temporary array
        int left = low;      // starting index of left half of arr
        int right = mid + 1; // starting index of right half of arr
        int cnt = 0;         // variable to count the pairs

        // Storing elements in the temporary array in a sorted manner
        while (left <= mid && right <= high) {
            if (arr[left] > 2LL * arr[right]) {
                cnt += (mid - left + 1);
                right++;
            } else {
                left++;
            }
        }
        left = low;
        right = mid + 1;

        while (left <= mid && right <= high) {
            if (arr[left] <= arr[right]) {
                temp.push_back(arr[left]);
                left++;
            } else {
                temp.push_back(arr[right]);
                // Core logic: If arr[left] > arr[right], all subsequent
                // elements in the left half will also be greater than
                // arr[right] because the left half is already sorted.
                right++;
            }
        }
        // If elements on the left half are still left
        while (left <= mid) {
            temp.push_back(arr[left]);
            left++;
        }
        // If elements on the right half are still left
        while (right <= high) {
            temp.push_back(arr[right]);
            right++;
        }
        // Transferring all elements from temporary to arr
        for (int i = low; i <= high; i++) {
            arr[i] = temp[i - low];
        }

        return cnt;
    }
    int mergeSort(vector<int>& arr, int low, int high) {
        int cnt = 0;
        if (low >= high)
            return cnt;

        int mid = (low + high) / 2;

        cnt += mergeSort(arr, low, mid);      // Count inversions in left half
        cnt += mergeSort(arr, mid + 1, high); // Count inversions in right half
        cnt +=
            merge(arr, low, mid, high); // Count cross inversions while merging

        return cnt;
    }
    int reversePairs(vector<int>& nums) {
        int n = nums.size();
        // Calls the merge sort function to count total inversions
        return mergeSort(nums, 0, n - 1);
    }
};