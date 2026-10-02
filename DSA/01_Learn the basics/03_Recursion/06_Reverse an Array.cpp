#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n)
{
    if (n > 1)
    {
        for (int i = 0; i < n - 1; i++)
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
        reverse(arr, n - 1);
    }
    
}

int main()
{
    int n = 5;
    int array[n] = {1, 2, 3,4,5};
    reverse(array, n);
    for (int i = 0; i < n; i++)
    {
        cout << array[i]<<endl;
    }
    return 0;
}
//*class Solution {
//   public:
//     void reverseArray(vector<int> &arr) {
//         reverse(arr.begin(),arr.end());
        
//     }
// };
//!class Solution {
//   public:
//     void reverseArray(vector<int> &arr) {
//         int left = 0;
//         int right = arr.size() - 1;
        
//         while (left < right) {
//             swap(arr[left], arr[right]);
//             left++;
//             right--;
//         }
//     }
// };

