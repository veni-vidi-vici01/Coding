#include <iostream>
using namespace std;
int main(){
    int n=234;
    int revnum=0,i=0;
    
    while (n>0){
        
        i=n%10;
        revnum=revnum*10+i;
        
        n/=10;
    }
    cout<<revnum;
    
    return 0;
}

