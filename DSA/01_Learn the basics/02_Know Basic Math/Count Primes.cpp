------------------------------------------Brute----------------------------
class Solution {
public:
    int countPrimes(int n) {
        int count =0;
        for(int i=2;i<n;i++){
            int temp=0;
            for(int j=i-1;j>1;j--){
               if(i%j==0){
                 temp++;
               }
            }
            if(temp==0){
                count++;
            }
        }
        return count;
    }
};
-------------------------------------Better---------------------------
class Solution {
public:
    int countPrimes(int n) {
        vector<int> v;
         v.push_back(2);
         if(n<=2){
            return 0;
         }
        for(int i=3;i<n;i++){
            int temp=0;
           for(int j=0;j<v.size();j++){
            if(i%v[j]==0){
                temp++;
                break;
            }
           }
           if(temp==0){
            v.push_back(i);
           }   
    }
    return v.size();  
    }
};
----------------------Optimal--------------------------------------
class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;

        vector<bool> isPrime(n, true);
        isPrime[0] = isPrime[1] = false;

        for (int i = 4; i < n; i += 2)
            isPrime[i] = false;

        for (int p = 3; p * p < n; p += 2) {
            if (isPrime[p]) {
                for (int i = p * p; i < n; i += 2 * p)
                    isPrime[i] = false;
            }
        }

        int count = 1; // 2 is prime

        for (int i = 3; i < n; i += 2) {
            if (isPrime[i])
                count++;
        }

        return count;
    }
};