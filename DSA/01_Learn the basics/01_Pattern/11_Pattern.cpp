#include<iostream>
using namespace std;
int main(){
    int n=6;
for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        if((i==j)||(i%2==0&&j%2==0)||(i%2!=0&&j%2!=0)){
            cout<<1;
        }else{
            cout<<0;
        }
    }
    cout<<endl;
}
return 0;
}