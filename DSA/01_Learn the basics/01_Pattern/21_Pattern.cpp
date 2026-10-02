#include<iostream>
using namespace std;
int main(){
    int n=5;
for(int i=0;i<n;i++){
    cout<<"*";
    }
    cout<<endl;
for(int i=1;i<2*n-3;i++){
    if(i%2==0){
        cout<<endl;
    }else{
        cout<<"*";
        for(int j=0;j<n-2;j++){
                cout<<" ";
            }
            cout<<"*";
        }
    }
    for(int i=0;i<n;i++){
    cout<<"*";
    }
    return 0;
}
