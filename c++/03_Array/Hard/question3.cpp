---------------------------------------------------Brute-----------------------------------------------------
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        vector<int> v1;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                    if(nums[i]+nums[j]+nums[k]==0){
                       v1.push_back(nums[i]);
                       v1.push_back(nums[j]);
                       v1.push_back(nums[k]);
                       sort(v1.begin(),v1.end());
                       v.push_back(v1);
                       v1.clear();
                    }
                }
            }
        }
        sort(v.begin(), v.end());

        v.erase(unique(v.begin(), v.end()), v.end());

        return v;
    }
};
-----------------------------------------------Better------------------------------------------------------
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        vector<int> v1;
        for(int i=0;i<nums.size();i++){
            unordered_map<int, int> mp;
            int target =-nums[i];
        for (int j = i+1; j < nums.size(); j++) {
            int required = target - nums[j];

            if (mp.find(required) != mp.end()) {
                v1.push_back(nums[i]);
                v1.push_back(nums[mp[required]]);
                v1.push_back(nums[j]);
                sort(v1.begin(),v1.end());
                    v.push_back(v1);
                v1.clear();
            }

            mp[nums[j]] = j;
        }
        }
        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());    //!Unique moves the duplicates to the end and the iterator to the element before the duplicate
        return v;
    }
};
--------------------------------------------------Optimal---------------------------------------
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin() , nums.end());

        for(int i=0; i<n; i++){
            if( i>0 && nums[i] == nums[i-1]){
                continue;
            }
            int j = i+1;
            int k = n-1;

            while(j<k){
                int sum = nums[i] + nums[j] + nums[k];

                if(sum<0){
                    j++;
                } 
                else if(sum>0){
                    k--;
                }
                else{
                    vector<int> triplet = {nums[i] , nums[j], nums[k]};
                    ans.push_back(triplet);
                    j++;
                    k--;

                    while( j<k && nums[j] == nums[j-1] ){
                        j++;
                    }
                    while( j<k && nums[k] == nums[k+1] ){
                        k--;
                    }
                }
            }
        }

        return ans;
    }
};