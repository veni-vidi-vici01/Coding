#include<bits/stdc++.h>
using namespace std;
int largestElement(vector<int>& nums) {
    int largestElement=nums[0];
      for(int i=0;i<nums.size()-1;i++){
        if(largestElement<nums[i+1]){
            largestElement=nums[i+1];
        }
      }
      return largestElement;
    }
    int main(){
        vector<int> v={-4,-3,-1,-11,-8};
        cout<<largestElement(v);
    }
//     class Solution {
//   public:
//     int largest(vector<int> &arr) {
//         int largestElement=arr[0];
//       for(int i=0;i<arr.size()-1;i++){
//         if(largestElement<arr[i+1]){
//             largestElement=arr[i+1];
//         }
//       }
//       return largestElement;
//     }
    
// };
