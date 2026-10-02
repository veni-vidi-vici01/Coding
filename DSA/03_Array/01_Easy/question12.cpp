------------------------------------better------------------------------
class Solution {
public:
    int singleNumber(vector<int>& nums) {
         int single_num=0;
         unordered_map<int,int> Findsinglenum;
         for(auto i:nums){
            Findsinglenum[i]+=1;
         }
         for(auto j:Findsinglenum){
            if(j.second==1){
                single_num=j.first;
            }
         }
        return single_num;
    }
};
--------------------------------brute-------------------------------------------------
class Solution {
public:
    int singleNumber(vector<int>& nums) {
         vector<int> newarr;
         int temp=INT_MIN;
         for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[i]==nums[j]&&i!=j){
                     newarr.push_back(nums[i]);
                     continue;
                }
            }
         }
         for(int i=0;i<nums.size()-1;i++){
            if(newarr[i]!=nums[i]){
                temp=nums[i];
                break;
            }
         }
         if(temp==INT_MIN){
            temp=nums[nums.size()-1];
         }

        return temp;
    }
};
--------------------------------optimal---------------------------------------------------------
class Solution {
public:
    int singleNumber(vector<int>& nums) {
          int single_num=nums[0];
      for(int i=1;i<nums.size();i++){
        single_num^=nums[i];
      }
      return single_num;
    }
};