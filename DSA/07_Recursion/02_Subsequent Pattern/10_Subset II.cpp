------------------------------------------------Brute------------------------------------
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
         vector<vector<int>> v;
        vector<int> r;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        Set(0, v, nums, r, n);
        sort(v.begin(),v.end());
        v.erase(unique(v.begin(),v.end()),v.end());
        return v;
    }
    void Set(int ind, vector<vector<int>>& v, vector<int>& nums, vector<int>& r, int n) {
        if (ind == n) {
            v.push_back(r);
            return;
        }
        r.push_back(nums[ind]);
        Set(ind + 1, v, nums, r, n);
        r.pop_back();
        Set(ind + 1, v, nums, r, n);
    }
};
-----------------------------------------------Optimal----------------------------------------
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
         vector<vector<int>> v;
        vector<int> r;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        Set(0, v, nums, r, n);
        return v;
    }
    void Set(int ind, vector<vector<int>>& v, vector<int>& nums, vector<int>& r, int n) {
        v.push_back(r);
        for (int i = ind; i <nums.size(); i++) {

            if (i > ind && nums[i] == nums[i - 1])
                continue;
            r.push_back(nums[i]);
            Set(i+ 1, v, nums, r, n);
            r.pop_back();
        }
    }
};