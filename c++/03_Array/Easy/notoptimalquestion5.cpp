#include <bits/stdc++.h>
using namespace std;
void rotateclockwiseby1(vector<int> &arr, int k = 1)
{
    int n = arr.size();
    vector<int> newarr(n);
    for (int i = k; i < n; i++)
    {
        newarr[i - k] = arr[i];
    }
    for (int i = 0; i < k; i++)
    {
        newarr[n - k + i] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = newarr[i];
    }
}
int main(){
    vector<int>v={1,2,3,4,5};
    rotateclockwiseby1(v);
    for(auto i:v){
        cout<<i<<endl;
    }
}

// class Solution {
//   public:
//     void rotateclockwiseby1(vector<int>& arr, int k=1) {
//   int n=arr.size();
//   vector<int>newarr(n);
//  for(int i=k;i<n;i++){
//      newarr[i-k]=arr[i];
//  }
//  for(int i=0;i<k;i++){
//      newarr[n-k+i]=arr[i];
//  }
//  for(int i=0;i<n;i++){
//      arr[i]=newarr[i];
//  }
// }
//     };