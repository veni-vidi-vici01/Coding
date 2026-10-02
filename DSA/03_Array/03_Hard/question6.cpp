---------------------------------------------------------Brute-------------------------------------------------------
class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        long long int count=0;
        for(int i=0;i<arr.size();i++){
            long long int sub_xor=arr[i];
            if(sub_xor==k){
                count++;
            }
            for(int j=i+1;j<arr.size();j++){
                sub_xor^=arr[j];
                if(sub_xor==k){
                    count++;
                }
            }
        }
        return count;
    }
};
----------------------------------optimal-------------------------------------------------------
class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        long n = arr.size();
                long count = 0;
                long XOR = 0;

                map<int,int> mp;
                mp[XOR]++;          // { (0,1) }


                for(int i=0; i<n; i++){
                    XOR = XOR ^ arr[i];

                    int x = XOR ^ k;
                    count += mp[x];

                    mp[XOR]++;
                }
                return count;
    }
};