--------------------------------------------------Optimal-----------------------------------------
class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> a ={1,2,3,4,5,6,7,8,9};
        vector<vector<int>> ans;
        vector<int> r;

        sort(a.begin(),a.end());

        Combination(0, a,n,k, ans, r);

        return ans;
    }
    void Combination(int ind, vector<int>& candidates, int target,int k,
                     vector<vector<int>>& ans, vector<int>& r) {

        if (target == 0&&r.size()==k) {
            ans.push_back(r);
            return;
        }

        for (int i = ind; i < candidates.size(); i++) {

            if (i > ind && candidates[i] == candidates[i - 1])
                continue;

            if ((candidates[i] > target)||r.size()>=k)
                break;

            r.push_back(candidates[i]);

            Combination(i + 1, candidates, target - candidates[i],k,ans, r);

            r.pop_back();
        }
    }

};