#include <bits/stdc++.h>
using namespace std;
void SelectionSort(vector<int> &arr)
{
    for (vector<int>::iterator i = arr.begin(); i< arr.end()-1; i++)
    {
        vector<int>::iterator temp = i;
        for (vector<int>::iterator j = i; j!= arr.end()-1; j++)
        {
            if (*temp > *(j + 1))
            {
                temp = (j + 1);
            }
        }
        int temp1 = *temp;
        *temp = *i;
        *i = temp1;
    }
}
    int main()
    {
     vector<int> array={5,4,4,1,1};
     SelectionSort(array);
    for(vector<int>::iterator i=array.begin();i!=array.end();i++){
        cout<<*i<<endl;
    }
        return 0;
    
}
// #include<iostream>
// using namespace std;
// void selectionSort(int arr[],int n){
// for(int i=0;i<n-1;i++){
// int* temp =arr+i;
// int temp1=i;
// for(int j=i;j<n-1;j++){
// if(*temp>arr[j+1]){
// temp=arr+j+1;
// temp1=j+1;
// }
// }
// int temp3=*temp;
// arr[temp1]=arr[i];
// arr[i]=temp3;
// }
// }
// int main(){
// int array[]={5,4,4,1,1};
// int n=5;
// selectionSort(array,n);
// for(int i=0;i<n;i++){
// cout<<array[i]<<endl;
// }
// return 0;
// }