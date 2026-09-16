----------------------------------------------------------Brute---------------------------------------------------------
class Solution {
  public:
    int maxLength(vector<int>& arr) {
        int maxlen=0;
        int len=0;
        for(int i=0;i<arr.size();i++){
            int sum=0;
            for(int j=i;j<arr.size();j++){
                sum+=arr[j];
                if(sum==0){
                    len=j-i+1;
                }
                if(len>maxlen){
                    maxlen=len;
                }
            }
        }
        return maxlen;
    }
};
-------------------------------------------------Better------------------------------------------------------------------------
class Solution {
  public:
    int maxLength(vector<int>& arr) {
        map<long long, int> preSumMap;
            long long sum = 0;
            int maxLen = 0;
            for(int i = 0; i<arr.size(); i++) {
                sum += arr[i];
                if(sum == 0) {
                    maxLen = max(maxLen, i+1);
                }
                long long rem = sum ;
                if(preSumMap.find(rem) != preSumMap.end()) {
                    int len = i - preSumMap[rem];
                    maxLen = max(maxLen, len);
                }
                if(preSumMap.find(sum) == preSumMap.end()) {
                    preSumMap[sum] = i;
                }
            }
            return maxLen;
    }
};
--------------------------------------------------Optimal----------------------------------------------------
class Solution {
  public:
    int maxLength(vector<int>& arr) {
       unordered_map<long long, int> preSumMap;
            long long sum = 0;
            int maxLen = 0;
            for(int i = 0; i<arr.size(); i++) {
                sum += arr[i];
                if(sum == 0) {
                    maxLen = max(maxLen, i+1);
                }
                long long rem = sum ;
                if(preSumMap.find(rem) != preSumMap.end()) {
                    int len = i - preSumMap[rem];
                    maxLen = max(maxLen, len);
                }
                if(preSumMap.find(sum) == preSumMap.end()) {
                    preSumMap[sum] = i;
                }
            }
            return maxLen;
    }
};