-------------------------brute------------------------------------------------
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum=INT_MIN;
        for(int i=0;i<nums.size();i++){
           int sum=0;
           for(int j=i;j<nums.size();j++){
            sum+=nums[j];
            if(sum>=max_sum){
                max_sum=sum;
            }
           }
        }
        return max_sum;
    }
};
-----------------------optimal-------------------------------------------------
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = INT_MIN;
        int sum = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            
            if (sum > max_sum) {
                max_sum = sum;
            }
            
            if (sum < 0) {
                sum = 0;
            }
        }
        
        return max_sum;
    }
};