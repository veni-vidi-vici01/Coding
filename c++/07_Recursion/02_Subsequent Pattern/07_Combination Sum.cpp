------------------------------------------Optimal---------------------------------------
class Solution {
public:
    void Combination(int ind, vector<int>& candidates, int target, vector<vector<int>>& v, vector<int>& r) {
        if (target == 0) {
            v.push_back(r);
            return;
        }
        
        if (ind == candidates.size()) {
            return;
        }

        if (candidates[ind] <= target) {
            r.push_back(candidates[ind]);
            Combination(ind, candidates, target - candidates[ind], v, r);
            r.pop_back(); 
        }

        Combination(ind + 1, candidates, target, v, r);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> v;
        vector<int> r;
        Combination(0, candidates, target, v, r);
        return v;
    }
};