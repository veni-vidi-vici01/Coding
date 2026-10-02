#include<iostream>
using namespace std;
int main(){
    int n=5;
char letter='A';
for (int i = 0; i <n; i++){
    for(int j=0;j<=i;j++){
      cout<<letter;
}
letter++;
cout<<endl;
}
return 0;
}