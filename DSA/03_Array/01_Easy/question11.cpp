-----------------------------------------Brute----------------------------------------------------------
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_ones=0;
        int ones =INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
               ones=1;
                for(int j=i+1;j<nums.size();j++){
                    if(nums[j]==0){
                        break;
                    }
                    ones++;
                }
            }
            if(ones>max_ones){
                max_ones=ones;
            }
        }
        return max_ones;
    }
};
---------------------------------optimal---------------------------------------------
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_ones=0;
        int ones =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                ones++;
            }
            if(max_ones<ones){
                max_ones=ones;
            }
            if(nums[i]==0){
                ones=0;
            }
        }
        return max_ones;
    }
};

