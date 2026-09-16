#include<iostream>
using namespace std;
void Number(int x){
    if(x>0){
        cout<<x<<endl;
        Number(x-1);
    }
}
int main(){
Number(5);
return 0;
}