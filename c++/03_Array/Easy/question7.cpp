#include <bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int> &arr)
{
    int j = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }
    for (int i = j + 1; i < arr.size(); i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[j], arr[i]);
            j++;
        }
    }
}
int main(){
    vector<int> v={0,1,4,0,5,2};
    moveZeroes(v);
    for(auto i:v){
        cout<<i<<endl;
    }
}
// class Solution {
//   public:
//     void pushZerosToEnd(vector<int>& arr) {
//         int j = -1;
//             for (int i = 0; i < arr.size(); i++)
//             {
//                 if (arr[i] == 0)
//                 {
//                     j = i;
//                     break;
//                 }
//             }
//             if(j==-1){
//                 return;
//             }
//             for (int i = j + 1; i < arr.size(); i++)
//             {
//                 if (arr[i] != 0)
//                 {
//                     swap(arr[j], arr[i]);
//                     j++;
//                 }
//             }
//     }
// };

// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int count_zero=0;
//         for(auto i=nums.begin();i<nums.end();){
//             if(*i==0){
//               nums.erase(i);
//               count_zero++;
//             }else{
//                 i++;
//             }
//         }
//         nums.insert(nums.end(),count_zero,0);
//     }
// };