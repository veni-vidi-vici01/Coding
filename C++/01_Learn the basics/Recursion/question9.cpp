#include<iostream>
using namespace std;
int f(int x){
    if(x>1){
        int fibonacchi=(f(x-1)+f(x-2));
        return fibonacchi;
    }else if(x==1){
        return 1;
    }else{
        return 1;
    }
}

int main(){
cout<<f(4);
return 0;
}
----------------------------------------------------------------Brute----------------------------------------------
class Solution {
public:
    int fib(int n) {
        if(n>1){
            int f=(fib(n-1)+fib(n-2));
            return f;
        }else if (n==1){
        return 1;
        }
        else{
        return 0;
        }
    }
    };
----------------------------------------------------------Brute-----------------------------------------------------
class Solution {
public:
    int fib(int n) {
        int sum;
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    sum=fib(n-1)+fib(n-2);
    return sum;
    }
};