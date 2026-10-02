Gfg Similar Question
Given an array of integers nums of unique elements. Return all possible subsets (power set) of the array.
--------------------------------------------------------optimal------------------------------------------
class Solution {
  public:
    vector<string> powerSet(string s) {
        int n=s.size();
        vector<string> v;
        string r;
        Set(0,v,s,r,n);
        return v;
    }
    void Set(int ind,vector<string> &v,string &s,string &r,int n){
        if(ind==n){
            v.push_back(r);
            return;
        }
        r.push_back(s[ind]);
        Set(ind+1,v,s,r,n);
        r.pop_back();
        Set(ind+1,v,s,r,n);
    }
};
-------------------------------------------------------------------------------------------------------
Striver Question 
-----------------------------------------------------optimal-----------------------------------------
class Solution {
public:
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
    vector<vector<int>> powerSet(vector<int>& nums) {
        vector<vector<int>> v;
        vector<int> r;
        int n = nums.size();
        Set(0, v, nums, r, n);
        return v;
    }
};