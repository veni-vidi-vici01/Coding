--------------------------------------------------------Better--------------------------------------------------------
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int temp;
        vector<int> v;
        for(auto i:nums){
            v.push_back(i);
        }
        reverse(v.begin(),v.end());
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        if(v==nums){
            sort(nums.begin(),nums.end());
            return ;
        }
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i-1]<nums[i]){
                temp=i;
                for(int j=i;j<nums.size();j++){
                    if(nums[j]>nums[i-1]&&nums[j]<=nums[temp]){
                        temp=j;
                    }
                }
                swap(nums[i-1],nums[temp]);
                sort(nums.begin()+i,nums.end());
                return;
            }
        }
        
    }
};
-------------------------------------------------optimal------------------------------------------------------------------
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int temp;
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i-1]<nums[i]){
                temp=i;
                for(int j=i;j<nums.size();j++){
                    if(nums[j]>nums[i-1]&&nums[j]<=nums[temp]){
                        temp=j;
                    }
                }
                swap(nums[i-1],nums[temp]);
                reverse(nums.begin()+i,nums.end());
                return;
            }
        }
        reverse(nums.begin(),nums.end());
    }
};