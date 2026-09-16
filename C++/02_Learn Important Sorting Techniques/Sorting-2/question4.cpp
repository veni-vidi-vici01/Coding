#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>& arr, int low, int high);
void quickSort(vector<int>& arr, int low, int high) {
        if (low >= high) {
            return;
        }

        int pivotIndex = partition(arr, low, high);

        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }

    int partition(vector<int>& arr, int low, int high) {
        int count_smaller = 0;
        for (int i = low + 1; i <= high; i++) {
            if (arr[i] < arr[low]) {
                count_smaller++;
            }
        }

        int pivotIndex = low + count_smaller;

        int temp = arr[pivotIndex];
        arr[pivotIndex] = arr[low];
        arr[low] = temp;

        int i = low, j = high;
        while (i < pivotIndex && j > pivotIndex) {
            while (i < pivotIndex && arr[i] < arr[pivotIndex]) {
                i++;
            }
            while (j > pivotIndex && arr[j] >= arr[pivotIndex]) {
                j--;
            }
            if (i < pivotIndex && j > pivotIndex) {
                int temp1 = arr[i];
                arr[i] = arr[j];
                arr[j] = temp1;
                i++;
                j--;
            }
        }

        return pivotIndex;
    }
    int main(){
        vector<int> v={1,5,4,3,1,3,5};
        quickSort(v,0,v.size()-1);
        for(auto i:v){
            cout<<i<<endl;
        }
    }


// class Solution {
//   public:
//     void quickSort(vector<int>& arr, int low, int high) {
//         if (low >= high) {
//             return;
//         }

//         int pivotIndex = partition(arr, low, high);

//         quickSort(arr, low, pivotIndex - 1);
//         quickSort(arr, pivotIndex + 1, high);
//     }

//     int partition(vector<int>& arr, int low, int high) {
//         int count_smaller = 0;
//         for (int i = low + 1; i <= high; i++) {
//             if (arr[i] < arr[low]) {
//                 count_smaller++;
//             }
//         }

//         int pivotIndex = low + count_smaller;

//         int temp = arr[pivotIndex];
//         arr[pivotIndex] = arr[low];
//         arr[low] = temp;

//         int i = low, j = high;
//         while (i < pivotIndex && j > pivotIndex) {
//             while (i < pivotIndex && arr[i] < arr[pivotIndex]) {
//                 i++;
//             }
//             while (j > pivotIndex && arr[j] >= arr[pivotIndex]) {
//                 j--;
//             }
//             if (i < pivotIndex && j > pivotIndex) {
//                 int temp1 = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp1;
//                 i++;
//                 j--;
//             }
//         }

//         return pivotIndex;
//     }
// };