#include <iostream>
using namespace std;
int main( ){
int n = 123456;
int count = 0;
if (n==0){
count=1;
}
while (n>0){
        count++ ;
    n=n/10;
}
cout << count ;
return 0;
}