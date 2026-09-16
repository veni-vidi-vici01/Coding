----------------------------------------------Brute(Pro Max)-----------------------------------------------------------------
class Solution {
public:
    int inversionCount(vector<int> &arr) {
        int n = arr.size();
        long long count = 0;

        for (int left = 0; left < n - 1; left++) {

            // Store original array
            vector<int> original = arr;

            // Sort elements after left
            sort(arr.begin() + left + 1, arr.end());

            // Count elements smaller than arr[left]
            int right = left + 1;

            while (right < n && arr[right] < arr[left]) {
                count++;
                right++;
            }

            // Restore original array
            arr = original;
        }

        return count;
    }
};
--------------------------------------------Better-------------------------------------------------------------------------
class Solution {
  public:
    int inversionCount(vector<int> &arr) {
        int n=arr.size();
        if(is_sorted(arr.begin(),arr.end())){
            return 0;
        }
        if(is_sorted(arr.rbegin(), arr.rend())){
            return (1LL*n*(n-1))/2;
        }
        int count=0;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                if(arr[i] > arr[j]&&i < j){
                    count++;
                }
            }
        }
        return count;
    }
};
-------------------------------------------------Optimal----------------------------------------------------------------
class Solution {
public:
    int merge(vector<int> &arr, int low, int mid, int high) {
        vector<int> temp; // temporary array
        int left = low;      // starting index of left half of arr
        int right = mid + 1;   // starting index of right half of arr
        int cnt = 0;         // variable to count the pairs

        // Storing elements in the temporary array in a sorted manner
        while (left <= mid && right <= high) {
            if (arr[left] <= arr[right]) {
                temp.push_back(arr[left]);
                left++;
            } else {
                temp.push_back(arr[right]);
                // Core logic: If arr[left] > arr[right], all subsequent elements in the left half 
                // will also be greater than arr[right] because the left half is already sorted.
                cnt += (mid - left + 1); 
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
    int mergeSort(vector<int> &arr, int low, int high) {
        int cnt = 0;
        if (low >= high) return cnt;

        int mid = (low + high) / 2;

        cnt += mergeSort(arr, low, mid);         // Count inversions in left half
        cnt += mergeSort(arr, mid + 1, high);    // Count inversions in right half
        cnt += merge(arr, low, mid, high);       // Count cross inversions while merging

        return cnt;
    }
    int inversionCount(vector<int>& arr) {
        int n=arr.size();
        // Calls the merge sort function to count total inversions
        return mergeSort(arr, 0, n - 1);
    }
};