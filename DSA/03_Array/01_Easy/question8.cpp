#include<bits/stdc++.h>
using namespace std;
int search(vector<int>& arr, int x) {
        for(auto i=0;i<arr.size();i++){
            if(x==arr[i]){
                return i;
            }
            }
             return -1;
        }
        int main(){
            vector<int> v={1,23,4,5};
            cout<<search(v,23);
        }
       


// class Solution {
//   public:
//     int search(vector<int>& arr, int x) {
//         for(auto i=0;i<arr.size();i++){
//             if(x==arr[i]){
//                 return i;
//             }
//             }
//              return -1;
//         }
       
        
//     };