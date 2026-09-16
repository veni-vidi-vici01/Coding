#include<bits/stdc++.h>
using namespace std;
bool isSorted(vector<int>& arr) {
        if(arr.size()<=1){
            return 1;
        }
        for(vector<int>::iterator i=arr.begin();i!=arr.end()-1;i++)
       {
           if(*i>*(i+1)){
               return 0;
           }
               
       } 
        
        return 1;
        
    }
    int main(){
        vector<int> v={1,2,3,4,5};
       cout<< isSorted(v);
       return 0;
    }

// class Solution {
//   public:
//     bool isSorted(vector<int>& arr) {
//         if(arr.size()<=1){
//             return 1;
//         }
//         for(vector<int>::iterator i=arr.begin();i!=arr.end()-1;i++)
//        {
//            if(*i>*(i+1)){
//                return 0;
//            }
               
//        } 
        
//         return 1;
        
//     }
// };