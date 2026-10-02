---------------------------------------------New Striver(Optimal)--------------------------------
class Solution {
   public:
    int arraySum(vector<int>& nums) { return Sum(nums, 0); }
    int Sum(vector<int>& nums, int i) {
        if (i >= nums.size()) {
            return 0;
        }
        return nums[i] + Sum(nums, i + 1);
    }
};