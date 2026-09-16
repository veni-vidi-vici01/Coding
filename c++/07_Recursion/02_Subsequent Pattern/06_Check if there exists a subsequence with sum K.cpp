----------------------------------------------Optimal without DP--------------------------------------------------------
class Solution
{
public:
    int countSubsequenceWithTargetSum(vector<int> &nums, int k)
    {
        int count = subse(0, 0, nums,k);
        return count;
    }
    int subse(int ind, int sum, vector<int> &nums, int k)
    {
        if (ind == nums.size())
        {
            if (sum == k)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        sum += nums[ind];
        int a = subse(ind + 1, sum, nums, k);
        if(a>=1){
            return 1;
        }
        sum -= nums[ind];
        int b = subse(ind + 1, sum, nums, k);
        if(b>=1){
            return 1;
        }
        return 0;
    }
};
