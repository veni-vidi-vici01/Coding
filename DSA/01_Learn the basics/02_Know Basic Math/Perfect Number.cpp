------------------------------------------------------Brute-------------------------------
class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum=0;
        for(int i=1;i<num;i++){
            if(num%i==0){
                sum+=i;
            }
        }
        if(sum==num){
            return 1;
        }
        return 0;
    }
};
--------------------------------------Optimal------------------------------------
class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num==1){
            return 0;
        }
        int sum=1;
        int a=sqrt(num);
        for(int i=2;i<=a;i++){
            if(num%i==0){
                 int b=num/i;
                 sum+=i;
                 sum+=b;
            }
        }
        if(sum==num){
            return 1;
        }
        return 0;
    }
};