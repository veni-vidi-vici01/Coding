#include<bits/stdc++.h>
using namespace std;
vector<int> findUnion(vector<int> &a, vector<int> &b) {
        vector<int> temp;
        int left = 0, right = 0;
        
        while (left < a.size() && right < b.size()) {
            
            if (left > 0 && a[left] == a[left - 1]) {
                left++;
                continue;
            }
            
            if (right > 0 && b[right] == b[right - 1]) {
                right++;
                continue;
            }
            
            if (a[left] < b[right]) {
                temp.push_back(a[left++]);
            } else if (a[left] > b[right]) {
                temp.push_back(b[right++]);
            } else { // Equal elements
                temp.push_back(a[left]);
                left++;
                right++;
            }
        }
        
      
        while (left < a.size()) {
            if (left == 0 || a[left] != a[left - 1]) {
                temp.push_back(a[left]);
            }
            left++;
        }
        
        
        while (right < b.size()) {
            if (right == 0 || b[right] != b[right - 1]) {
                temp.push_back(b[right]);
            }
            right++;
        }
        
        return temp;
    }
int main(){
    vector<int> v={1,1,2,2,3,3};
    vector<int> v2={1,4,5,6};
    for(auto i:findUnion(v,v2)){
         cout<<i<<endl;
    }

}
// class Solution {
//   public:
//     vector<int> findUnion(vector<int> &a, vector<int> &b) {
//         vector<int> temp;
//         int left = 0, right = 0;
        
//         while (left < a.size() && right < b.size()) {
//             // Skip duplicates in array a
//             if (left > 0 && a[left] == a[left - 1]) {
//                 left++;
//                 continue;
//             }
//             // Skip duplicates in array b
//             if (right > 0 && b[right] == b[right - 1]) {
//                 right++;
//                 continue;
//             }
            
//             if (a[left] < b[right]) {
//                 temp.push_back(a[left++]);
//             } else if (a[left] > b[right]) {
//                 temp.push_back(b[right++]);
//             } else { // Equal elements
//                 temp.push_back(a[left]);
//                 left++;
//                 right++;
//             }
//         }
        
//         // Process remaining elements of array a
//         while (left < a.size()) {
//             if (left == 0 || a[left] != a[left - 1]) {
//                 temp.push_back(a[left]);
//             }
//             left++;
//         }
        
//         // Process remaining elements of array b
//         while (right < b.size()) {
//             if (right == 0 || b[right] != b[right - 1]) {
//                 temp.push_back(b[right]);
//             }
//             right++;
//         }
        
//         return temp;
//     }
// };