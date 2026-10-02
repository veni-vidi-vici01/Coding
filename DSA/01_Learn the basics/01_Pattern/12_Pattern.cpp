#include<iostream>
using namespace std;
int main(){
    int n=4;
for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        cout<<j+1;
    }
    for(int j=0;j<2*n-2*i-2;j++){
        cout<<" ";
    }
    for(int j=2*n-1-i;j<2*n;j++){
        cout<<2*n-j;
    }
    cout<<endl;
}
return 0;
}