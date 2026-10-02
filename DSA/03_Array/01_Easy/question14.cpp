--------------------------Brute----------------------------------------------------------------------
class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        int subarr=0;
        int max_subarr=0;
        for(int i=0;i<arr.size();i++){
            int sum=0;
            for(int j=i;j<arr.size();j++){
                    sum+=arr[j];
                if(sum==k){
                    subarr=j-i+1;
                }
            }
            if(subarr>max_subarr){
                max_subarr=subarr;
            }
         }
         return max_subarr;
    }
};
--------------------Optimal-------------------------------------------------------------------------
#include<bits/stdc++.h>
int longestSubarrayWithSumK(vector<int> a, long long k) {
    map<long long, int> preSumMap;
    long long sum = 0;
    int maxLen = 0;
    for(int i = 0; i<a.size(); i++) {
        sum += a[i];
        if(sum == k) {
            maxLen = max(maxLen, i+1);
        }
        long long rem = sum - k;
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
//*find() 
//? mp.find(key)----> returns iterator and if not found returns mp.end()
//?if(mp.find(key)!=mp.end())----->If The key exists in the map
//?mp.find(key)!=mp.end()----->If The key exists in the map
//?mp.find(key)==mp.end()----->The key does not exist in  the map
//?
