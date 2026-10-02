--------------------------------------------Optimal---------------------------------------------
class Solution {
public:
    int largestDigit(int n) {
       int max=INT_MIN;
       int largest=max;
       if(n==0){
        largest=0;
       }
       while(n>0){
          max=n%10;
          if(max>largest){
            largest=max;
          }
          n/=10;
       }
       return largest;
    }
};