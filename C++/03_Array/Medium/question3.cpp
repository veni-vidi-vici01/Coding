-------------------------------Brute-----------------------------------------
class Solution {
public:
    int majorityElement(vector<int>& nums) {
              int temp;
        for(int i=0;i<nums.size();i++){
            int count=0;
            for(int j=0;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    count++;
                }
                if(count>(nums.size()/2)){
                    temp= nums[i];
                }
                
            }
        }
        return temp;
    }
};
--------------------------Better---------------------------------------------------
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int temp=0;
        int temp1=0;
        unordered_map<int,int> maj_elem;
        for(auto i:nums){
            maj_elem[i]+=1;
        }
        for(auto j:maj_elem){
            if(temp<j.second){
                temp1=j.first;
                temp=j.second;
            }
        }
        return temp1;
    }
};
-----------------------optimal-------------------------------------------------------------
class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int cnt = 0;
    int el;
    for(int i = 0; i<nums.size(); i++) {
        if(cnt == 0) {
            cnt=1;
            el=nums[i];
        }
        else if(nums[i] == el) {
            cnt++;
        }
        else {
            cnt--;
        }
    }
    int cnt1 = 0;
    for(int i = 0; i<nums.size(); i++) {
        if(nums[i] == el) cnt1++;
    }
    if(cnt1 > (nums.size() / 2)) {
        return el;
    }
    return -1;
    }
};