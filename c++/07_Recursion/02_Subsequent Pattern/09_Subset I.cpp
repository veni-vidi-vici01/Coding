----------------------------------------------------Brute--------------------------------------------
class Solution {
  public:
    vector<int> subsetSums(vector<int>& arr) {
        vector<int> v;
        vector<int> r;
        int n=arr.size();
        Set(0,v,arr,r,n);
        return v;
    }
    void Set(int ind, vector<int>& v, vector<int>& nums, vector<int>& r, int n) {
                    if (ind == n) {
                        int sum=0;
                        for(auto i :r){
                            sum+=i;
                        }
                        v.push_back(sum);
                        return;
                    }
                    r.push_back(nums[ind]);
                    Set(ind + 1, v, nums, r, n);
                    r.pop_back();
                    Set(ind + 1, v, nums, r, n);
                }
};
-----------------------------------------------------Optimal-----------------------------------------
class Solution {
  public:
    vector<int> subsetSums(vector<int>& arr) {
        vector<int> v;
        int sum=0;
        int n=arr.size();
        Set(0,v,arr,sum,n);
        return v;
    }
    void Set(int ind, vector<int>& v, vector<int>& nums, int sum, int n) {
                    if (ind == n) {
                        v.push_back(sum);
                        return;
                    }
                    sum+=nums[ind];
                    Set(ind + 1, v, nums, sum, n);
                    sum-=nums[ind];
                    Set(ind + 1, v, nums, sum, n);
                }
};