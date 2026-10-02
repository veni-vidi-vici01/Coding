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
-----------------------------------------------------------------------------------
#include <iostream>
using namespace std;
int Sum(int x){
    if(x>0){
        return x+Sum(x-1);
    }else{
        return 0;
    }
}
int main() {
    int n;
    cout<<"Enter a Number:";
    cin >> n;
    cout<<Sum(n);
    return 0;
}