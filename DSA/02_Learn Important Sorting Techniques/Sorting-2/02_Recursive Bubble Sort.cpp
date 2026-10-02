#include<bits/stdc++.h>
using namespace std;
void Recursivebubblesort(vector<int>&arr,int n){
if(n>2){
    for(vector<int>::iterator j = arr.begin() ; j != arr.end() ; j++){
    if(*j>*(j+1)){
                    int temp =*j;
                    *j=*(j+1);
                    *(j+1)=temp;
}
}
Recursivebubblesort(arr,n-1);
}
}
int main(){
vector<int>nums={7,4,1,5,3};
Recursivebubblesort(nums,5);
for(auto i:nums){
cout<<i<<endl;
}
return 0;
}