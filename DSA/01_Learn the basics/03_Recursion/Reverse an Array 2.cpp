-------------------------------------------------------New Striver(Optimal)-----------------------------------
class Solution {
   public:
    vector<int> reverseArray(vector<int>& nums) {
        Swap(nums, 0);
        return nums;
    }
    void Swap(vector<int>& nums, int i) {
        if (i >= nums.size() / 2) {
            return;
        }
        swap(nums[i], nums[nums.size() - 1 - i]);
        Swap(nums, i + 1);
    }
};