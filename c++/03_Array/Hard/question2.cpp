-------------------------------------------------------Brute-------------------------------------------------
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> v;
        unordered_map<int,int> v1; 
        for(int i=0;i<nums.size();i++){
            int count=0;
            for(int j=0;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    count++;
                }
            }
            if(count>nums.size()/3){
                v.push_back(nums[i]);
            }
        }
        for(auto i:v){
            v1[i]+=1;
        }
        v.clear();
        for(auto i:v1){
            v.push_back(i.first);
        }
        return v;
    }
};
------------------------------------------------------Better----------------------------------------------------
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       unordered_map<int,int> v1;
       vector<int> v;
       for(int i=0;i<nums.size();i++){
        v1[nums[i]]+=1;
       }
       for(auto i: v1){
        if(i.second>nums.size()/3){
            v.push_back(i.first);
        }
       }
       return v;
    }
};
-------------------------------------------------Optimal-----------------------------------------------------------
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
         int n = nums.size();
        int counter1 = 0;
        int counter2 = 0;
        int element1 = INT_MIN;
        int element2 = INT_MIN;
    
        for(int i=0; i<n; i++){
            if( counter1 == 0  &&  element2 != nums[i] ){
                counter1 = 1;
                element1 = nums[i];
            }
            else if( counter2 == 0  &&  element1 != nums[i] ){
                counter2 = 1;
                element2 = nums[i];
            }
            else if( nums[i] == element1 ){
                counter1++;
            }
            else if( nums[i] == element2 ){
                counter2++;
            }
            else{
                counter1--;
                counter2--;
            }
        }

        vector<int> ans;
        counter1 = 0;
        counter2 = 0;

        for(int i=0; i<n; i++){
            if(nums[i] == element1){
                counter1++;
            }
            if(nums[i] == element2){
                counter2++;
            }
        }

        int min = int(n/3) + 1;
        if(counter1 >= min){
            ans.push_back(element1);
        }
        if(counter2 >= min){
            ans.push_back(element2);
        }

        sort(ans.begin() , ans.end());

        return ans;
    }
};