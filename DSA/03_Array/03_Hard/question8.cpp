---------------------------------------------------Brute--------------------------------------------------------------------------
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=0;i<n;i++){
            nums1[m+i]=nums2[i];
        }
        for(int i=m;i<m+n;i++){
            int temp1 =nums1[i];
            for(int j=i-1;j>=0;j--){
                if(temp1<nums1[j]){
                    int temp=nums1[j];
                    nums1[j]=nums1[j+1];
                    nums1[j+1]=temp;
                }
            }
        }
    }
};
---------------------------------------------------Common Sense Method(Better)--------------------------------------------------------------------
As per nayan these will not be considered.
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=0;i<nums2.size();i++){
            nums1[m+i]=nums2[i];
        }
        sort(nums1.begin(),nums1.end());
    }
};
---------------------------------------------------------Better 2-------------------------------------------------------------------
class Solution {
public:
 void swapIfGreater(vector<int>& nums1, vector<int>& nums2, int ind1, int ind2) {
        if (nums1[ind1] > nums2[ind2]) {
            swap(nums1[ind1], nums2[ind2]);
        }
    }
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    // Function to merge the arrays.
        int len = m + n;
        int gap = (len / 2) + (len % 2);
        
        while (gap > 0) {
            int left = 0;
            int right = left + gap;
            
            while (right < len) {
                // left is in nums1 and right is in nums2
                if (left < m && right >= m) {
                    swapIfGreater(nums1, nums2, left, right - m);
                }
                // both left and right are in nums2
                else if (left >= m) {
                    swapIfGreater(nums2, nums2, left - m, right - m);
                }
                // both left and right are in nums1
                else {
                    swapIfGreater(nums1, nums1, left, right);
                }
                left++; 
                right++;
            }
            if (gap == 1) break;
            gap = (gap / 2) + (gap % 2);
        }
        for(int i=m;i<m+n;i++){
            nums1[i]=nums2[i-m];
        }
    }
};
-----------------------------------------------------Optimal--------------------------------------------------------------------
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int i = m-1;
        int j = n-1;
        int k = 1;

        while( i>=0 && j>=0 ){
            if ( nums1[i] > nums2[j] ){
                nums1[m+n-k] = nums1[i];
                i--;
                k++;
            }else if( nums1[i] < nums2[j] ){
                nums1[m+n-k] = nums2[j];
                j--;
                k++;
            }else{
                nums1[m+n-k] = nums1[i];
                k++;
                i--;
            }
        }
        while( j >= 0 ){
            nums1[m+n-k] = nums2[j];
            k++;
            j--;
        }
    }
};