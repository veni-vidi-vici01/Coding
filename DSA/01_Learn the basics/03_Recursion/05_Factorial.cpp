#include<iostream>
using namespace std;
int factorial(int n){
    if(n>0){
        return n*factorial(n-1);
    }else{
        return 1;
    }
}
int main(){
    int x;
    cout<<"Enter a Number:";
    cin>>x;
    cout<<factorial(x);
return 0;
}
---------------------------------------------New Striver(Optimal)-----------------------------------------
class Solution {
   public:
    long long int factorial(int n) {
        if (n == 0) {
            return 1;
        }
        return n * factorial(n - 1);
    }
};
