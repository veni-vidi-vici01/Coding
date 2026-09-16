#include<bits/stdc++.h>
using namespace std;
void bubbleSort(vector<int>& arr) {
    vector<int>::iterator j; 
        for(int i=0;i<arr.size()-1;i++){
            for(j=arr.begin();j!=arr.end()-i-1;j++){
                if(*j>*(j+1)){
                    int temp =*j;
                    *j=*(j+1);
                    *(j+1)=temp;
                }
            }
        }  
    }
int main(){
vector<int>nums={5, 4, 4, 1, 1};
bubbleSort(nums);
for(auto i:nums){
cout<<i<<endl;
}
return 0;
}