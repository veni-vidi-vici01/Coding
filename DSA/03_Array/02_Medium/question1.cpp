-------------------brute---------------------------------
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> returnvalue;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    returnvalue.push_back(i);
                    returnvalue.push_back(j);
                    break;
                }
            }
        }
                return returnvalue;
    }
};
------------------brute 2---------------------------------
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        int n = nums.size();

        if (target >= 0) {
            for (int i = 0; i < n; i++) {

                if (nums[i] <= target && nums[i] >= 0) {
                    for (int j = i + 1; j < n; j++) {

                        if (nums[i] + nums[j] == target) {
                            v.push_back(i);
                            v.push_back(j);
                            return v;
                        }
                    }
                }
                else {
                    for (int j = i + 1; j < n; j++) {

                        if (nums[i] + nums[j] == target) {
                            v.push_back(i);
                            v.push_back(j);
                            return v;
                        }
                    }
                }
            }
        }
        else {
            for (int i = 0; i < n; i++) {

                if (nums[i] >= target && nums[i] < 0) {
                    for (int j = i + 1; j < n; j++) {

                        if (nums[i] + nums[j] == target) {
                            v.push_back(i);
                            v.push_back(j);
                            return v;
                        }
                    }
                }
                else {
                    for (int j = i + 1; j < n; j++) {

                        if (nums[i] + nums[j] == target) {
                            v.push_back(i);
                            v.push_back(j);
                            return v;
                        }
                    }
                }
            }
        }

        return v;
    }
};
-------------------------optimal----------------------------
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            int required = target - nums[i];

            if (mp.find(required) != mp.end()) {
                return {mp[required], i};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};