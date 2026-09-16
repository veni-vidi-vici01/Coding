-----------------------------------------------------Brute-------------------------------------------
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> v1;
        vector<int> v2;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                v1.push_back(nums[i]);
            }else{
                v2.push_back(nums[i]);
            }
        }
        nums.clear();
        int i=0;
        while(i<v1.size()){
            nums.push_back(v1[i]);
            nums.push_back(v2[i]);
            i++;
        }
        return nums;
    }
};
----------------------------------------------optimal-------------------------------------------------
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> v1(nums.size());
        int j=0;int k=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                v1[j]=nums[i];
                j+=2;
            }else{
                v1[k]=nums[i];
                k+=2;
            }
        }
        return v1;
    }
};
