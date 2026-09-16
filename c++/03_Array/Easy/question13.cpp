------------------------brute------------------------------------------------------
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
                    break;
                }
            }
            if(subarr>max_subarr){
                max_subarr=subarr;
            }
         }
         return max_subarr;
    }
};
------------------------------better----------------------------------------------
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
--------------------------------optimal--------------------------------------------------
#include<bits/stdc++.h>
int longestSubarrayWithSumK(vector<int> a, long long k) {
    int left = 0, right = 0;
    long long sum = a[0];
    int maxLen = 0;
    int n = a.size();
    while(right < n) {
        while(left <= right && sum > k) {
            sum -= a[left];
            left++;
        }
        if(sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        if(right < n) sum += a[right];
    }
    return maxLen;
}