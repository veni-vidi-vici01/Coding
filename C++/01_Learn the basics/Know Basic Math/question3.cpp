#include <iostream>
using namespace std;
int main(){
    int n=1123;
    int revnum=0,i=0;
    int temp =n;
    while (temp>0){
        
        i=temp%10;
        revnum=revnum*10+i;
        
        temp/=10;
    }
    ;
    if(n==revnum){
    cout<<"The number is Palindrome";
    }else{
        cout<<"The Number is not Palindrome";
    }
    return 0;
}
