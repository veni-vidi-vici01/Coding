----------------------------------------------------Brute------------------------------------------------------------
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        int sum;
        for(int i=0;i<nums.size();i++){
            sum=nums[i];
            if(sum==k){
                count++;
            }
            for(int j=i+1;j<nums.size();j++){
                sum+=nums[j];
                if(sum==k){
                    count++;
                }
            }
            sum=0;
        }
        return count;
    }
};
-----------------------------------------Optimal--------------------------------------------------------------------
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        mpp[0] = 1;
        int preSum = 0, cnt = 0;
        
        for(int i = 0; i < nums.size(); i++) {
            preSum += nums[i];
            int remove = preSum - k;
            cnt += mpp[remove];
            mpp[preSum] += 1;
        }
        
        return cnt;
    }
};