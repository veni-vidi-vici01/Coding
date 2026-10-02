------------------------------------New Striver(STL Optimal)---------------------------------------
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        return nums.size();
    }
};
--------------------------------------------Optimal---------------------------------
class Solution {
   public:
    int removeDuplicates(vector<int>& nums) {
        int temp = nums[0];
        int left = 1;
        int right = 1;
        while (right < nums.size()) {
            if (temp != nums[right]) {
                temp = nums[right];
                swap(nums[left], nums[right]);
                left++;
            }
            right++;
        }
        return left;
    }
};