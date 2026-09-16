---------------------------------------------------------Brute-----------------------------------------------------
class Solution {
public:
    double myPow(double x, int n) {
        int temp=0;
        double m=x;
        long long a=n;
        if(a<0){
            a=-a;
            temp=1;
        }
        if(n==0){
            return 1;
        }
        if(temp==1){
            x=1/power(x,a,m);
        }else{
            x=power(x,a,m);
        }
        return x;
    }
    double power(double x,long long a,double m){
        if(a<=1){
            return x;
        }
       x*=m;
       return power(x,a-1,m);
    }
};
--------------------------------------------------------Optimal(Recursive)--------------------------------------------------
class Solution {
public:
    double helper(double x, long long n) {
        if (n == 0) return 1.0;
        
        double half = helper(x, n / 2);
    
        if (n % 2 == 0) {
            return half * half;
        } 
        else {
            return half * half * x;
        }
    }

    double myPow(double x, int n) {
        long long N = n;
        if (N < 0) {
            x = 1.0 / x;
            N = -N;
        }
        return helper(x, N);
    }
};