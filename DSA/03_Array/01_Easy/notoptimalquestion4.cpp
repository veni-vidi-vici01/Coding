#include<bits/stdc++.h>
using namespace std;
  vector<int> removeDuplicates(vector<int> &arr) {
        vector<int> newarr;
        int temp=arr[0];
        newarr.push_back(temp);
        for(int i=0;i<arr.size()-1;i++){
            if((arr[i]=arr[i+1])&&temp!=arr[i+1]){
                newarr.push_back(arr[i]);
                temp=arr[i];
            }else if(arr[i]<arr[i+1]){
                newarr.push_back(arr[i]);
            }
        }
        return newarr;
    }
    int main(){
        vector<int>v ={1,23,23,44};
        for(auto i:removeDuplicates(v)){
            cout<<i<<endl;
        }
        return 0;
    }
// class Solution {
//   public:
//     vector<int> removeDuplicates(vector<int> &arr) {
//         vector<int> newarr;
//         int temp=arr[0];
//         newarr.push_back(temp);
//         for(int i=0;i<arr.size()-1;i++){
//             if((arr[i]=arr[i+1])&&temp!=arr[i+1]){
//                 newarr.push_back(arr[i]);
//                 temp=arr[i];
//             }else if(arr[i]<arr[i+1]){
//                 newarr.push_back(arr[i]);
//             }
//         }
//         return newarr;
//     }
// };