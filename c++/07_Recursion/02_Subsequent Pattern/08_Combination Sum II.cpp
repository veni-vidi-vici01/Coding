----------------------------------------------Brute----------------------------------------------------
class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        set<vector<int>> v;
        vector<vector<int>> v1;
        vector<int> r;
        Combination(0, candidates, target, v, r);
        for(auto i: v){
            v1.push_back(i);
        }
        return v1;
    }
    void Combination(int ind, vector<int>& candidates, int target, set<vector<int>>& v, vector<int>& r) {
        if (target == 0) {
            vector<int> k=r;
            sort(k.begin(),k.end());
            v.insert(k);
            return;
        }
        
        if (ind == candidates.size()) {
            return;
        }

        if (candidates[ind] <= target) {
            r.push_back(candidates[ind]);
            Combination(ind+1, candidates, target - candidates[ind], v, r);
            r.pop_back(); 
        }

        Combination(ind + 1, candidates, target, v, r);
    }
};
----------------------------------------------Better-----------------------------------------------------
class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
         vector<vector<int>> v;
        vector<int> r;
        Combination(0, candidates, target, v, r);
        sort(v.begin(),v.end());
        v.erase(unique(v.begin(), v.end()), v.end());
        return v;
    }
    void Combination(int ind, vector<int>& candidates, int target, vector<vector<int>>& v, vector<int>& r) {
        if (target == 0) {
            vector<int> k=r;
            sort(k.begin(),k.end());
            v.push_back(k);
            return;
        }
        
        if (ind == candidates.size()) {
            return;
        }

        if (candidates[ind] <= target) {
            r.push_back(candidates[ind]);
            Combination(ind+1, candidates, target - candidates[ind], v, r);
            r.pop_back(); 
        }

        Combination(ind + 1, candidates, target, v, r);
    }
};
-----------------------------------------------------Optimal--------------------------------------
class Solution {
public:
    void Combination(int ind, vector<int>& candidates, int target,
                     vector<vector<int>>& ans, vector<int>& r) {

        if (target == 0) {
            ans.push_back(r);
            return;
        }

        for (int i = ind; i < candidates.size(); i++) {

            if (i > ind && candidates[i] == candidates[i - 1])
                continue;

            if (candidates[i] > target)
                break;

            r.push_back(candidates[i]);

            Combination(i + 1, candidates, target - candidates[i],
                        ans, r);

            r.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> r;

        sort(candidates.begin(), candidates.end());

        Combination(0, candidates, target, ans, r);

        return ans;
    }
};