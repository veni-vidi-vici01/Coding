#include <bits/stdc++.h>
using namespace std;
int n=5;
int fixednum=n;
void insertionSort(vector<int> &arr,int n){
int corr_n=fixednum-n;
 if(n>0){
    for(int i=0;i<corr_n;i++){
        for (auto j =i+1; j>0; j--)
        {
            if ((arr[j-1] >arr[j] ) && j-1 >= 0)
            {
                int temp =arr[j-1];
                arr[j-1] =arr[j] ;
                arr[j] = temp;
            }
        }
    }
        insertionSort(arr,n-1);
    }
}
int main(){
    vector<int> nums={5,4,4,1,1};
    insertionSort(nums,5);
    for(auto i:nums){
        cout<<i<<endl;
    }
}