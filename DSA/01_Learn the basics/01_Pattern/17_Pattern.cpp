#include <iostream>
using namespace std;
int main() {
int n=6;
char alp= 'A';
for(int i=0;i<n;i++){
char letter ='A';
for(int j=0;j<n-i-1;j++){
cout<<" ";
}
for(int j=0;j<i+1;j++){  
cout<<letter;
letter++;
}
for(int j=0;j<i;j++){
cout<<alp;
alp--;
}
if(i>0){
alp+=i+1;
}
cout<<endl;

}
return 0;
}
