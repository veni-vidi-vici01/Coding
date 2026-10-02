-----------------------------------------------------Brute--------------------------------------------
class Solution {
   public:
    int LCM(int n1, int n2) { return (n1 * n2) / gcd(n1, n2); }
    int gcd(int n1, int n2) {
        int hcf = 1;
        int a = min(n1, n2);
        for (int i = 1; i <= a; i++) {
            if (n1 % i == 0 && n2 % i == 0) {
                hcf = i;
            }
        }
        return hcf;
    }
};
-----------------------------------------------------Optimal-------------------------------------------
class Solution {
   public:
    int LCM(int n1, int n2) { return (n1 * n2) / gcd(n1, n2); }
    int GCD(int n1,int n2) {
     while(min(n1,n2)>0){
        int a =min(n1,n2);
        int b=max(n1,n2);
        n1=b%a;
        n2=a;
     }
     return max(n1,n2);
    }
};