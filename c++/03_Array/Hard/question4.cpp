------------------------------------------------Brute------------------------------------
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> v;
        vector<int> v1;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                    for(int l=k+1;l<nums.size();l++){
                        if((long long)nums[i]+nums[j]+nums[k]+nums[l]==target){
                            v1.push_back(nums[i]);
                            v1.push_back(nums[j]);
                            v1.push_back(nums[k]);
                            v1.push_back(nums[l]);
                            sort(v1.begin(),v1.end());
                            v.push_back(v1);
                            v1.clear();
                        }
                    }
                }
            }
        }
        sort(v.begin(),v.end());
        v.erase(unique(v.begin(), v.end()), v.end());
        return v;
    }
};
----------------------------------------Better---------------------------------------------------------------
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> v;
        vector<int> v1;
        for (int i = 0; i < nums.size(); i++) {
            long long target1 = (long long)target - nums[i];
            for (int j = i + 1; j < nums.size(); j++) {
                unordered_map<long long, int> mp;
                long long target2 = (long long)target1 - nums[j];
                for (int k = j + 1; k < nums.size(); k++) {
                    long long required = (long long)target2 - nums[k];

                    if (mp.find(required) != mp.end()) {
                        v1.push_back(nums[i]);
                        v1.push_back(nums[j]);
                        v1.push_back(nums[mp[required]]);
                        v1.push_back(nums[k]);
                        sort(v1.begin(), v1.end());
                        v.push_back(v1);
                        v1.clear();
                    }

                    mp[nums[k]] = k;
                }
            }
        }
        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()),
                v.end()); //! Unique moves the duplicates to the end and the
                          //! iterator to the element before the duplicate
        return v;
    }
};
-----------------------------------------Optimal-------------------------------------------------------------
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin() , nums.end());
        for(int i=0;i<n;i++){
           int target1=target-nums[i];
        for(int j=i+1; j<n; j++){
            if( j>i+1 && nums[j] == nums[j-1]){
                continue;
            }
            int k = j+1;
            int l = n-1;

            while(k<l){
                long long sum =(long long) nums[j] + nums[k] + nums[l];

                if(sum<target1){
                    k++;
                } 
                else if(sum>target1){
                    l--;
                }
                else{
                    vector<int> quadruplets = {nums[i],nums[j] , nums[k], nums[l]};
                    ans.push_back(quadruplets);
                    k++;
                    l--;

                    while( k<l && nums[k] == nums[k-1] ){
                        k++;
                    }
                    while( k<l && nums[l] == nums[l+1] ){
                        l--;
                    }
                }
            }
        }
        }
        sort(ans.begin(),ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        return ans;
    }
};