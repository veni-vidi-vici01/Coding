-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -Brute-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --
class Solution
{
public:
    int countSubsequenceWithTargetSum(vector<int> &nums, int k)
    {
        int n = nums.size();
        vector<int> ds;
        int count = subse(0, ds, nums, n, k);
        return count;
    }
    int subse(int ind, vector<int> &ds, vector<int> &nums, int size, int k)
    {
        int sum = 0;
        int count = 0;
        if (ind == size)
        {
            for (auto it : ds)
            {
                sum += it;
            }
            if (!ds.empty() && sum == k)
            {
                count++;
            }
            return count;
        }
        ds.push_back(nums[ind]);
        int a = subse(ind + 1, ds, nums, size, k);
        ds.pop_back();
        int b = subse(ind + 1, ds, nums, size, k);
        return a + b;
    }
};
-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --Optimal-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -
class Solution
{
public:
    int countSubsequenceWithTargetSum(vector<int> &nums, int k)
    {
        return subse(0, 0, false, nums, k);
    }

    int subse(int ind, int sum, bool taken, vector<int> &nums, int k)
    {
        if (ind == nums.size())
        {
            if (taken && sum == k)
            {
                return 1;
            }
            return 0;
        }

        int a = subse(ind + 1, sum + nums[ind], true, nums, k);

        int b = subse(ind + 1, sum, taken, nums, k);

        return a + b;
    }
};