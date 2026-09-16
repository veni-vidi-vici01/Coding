#include <bits/stdc++.h>
using namespace std;
int getSecondLargest(vector<int> &arr)
{
    int largestElement = arr[0];

    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (largestElement < arr[i + 1])
        {
            largestElement = arr[i + 1];
        }
    }

    int SecondlargestElement = INT_MIN;     //! Min int stored in intilization

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != largestElement &&
            arr[i] > SecondlargestElement)
        {
            SecondlargestElement = arr[i];
        }
    }

    if (SecondlargestElement == INT_MIN)
    {
        return -1;
    }

    return SecondlargestElement;
}




// #include <bits/stdc++.h>
// using namespace std;
// int getSecondLargest(vector<int> &arr)
// {
//     int largestElement = arr[0];
//     for (int i = 0; i < arr.size() - 1; i++)
//     {
//         if (largestElement < arr[i + 1])
//         {
//             largestElement = arr[i + 1];
//         }
//     }
//     for (int i = 0; i != arr.size();)
//     {
//         if (largestElement == arr[i])        //!In these condition if i is erased i+1 index becomes i so segmentation error occurs to avoid it use these type of for loop
//         {
//             arr.erase(arr.begin() + i);
//         }
//         else
//         {
//             i++;
//         }
//     }
//     if (arr.size() == 0)
//         {                                   //!If each of element is same then 
//             return -1;
//         }
//     int SecondlargestElement = arr[0];
//     for (int i = 0; i < arr.size() - 1; i++)
//     {
//         if (SecondlargestElement < arr[i + 1])
//         {
//             SecondlargestElement = arr[i + 1];
//         }
//     }
//     if (largestElement > SecondlargestElement)
//     {
//         return SecondlargestElement;
//     }
//     else
//     {
//         return -1;
//     }
// }
//*-------------------------------------------------------------------------------------------*
    // class Solution {
    //   public:
    //     int getSecondLargest(vector<int> &arr) {
    //       int largestElement=arr[0];
    //       for(int i=0;i<arr.size()-1;i++){
    //         if(largestElement<arr[i+1]){
    //             largestElement=arr[i+1];
    //         }
    //       }
    //       for(int i=0;i!=arr.size();){
    //       if(largestElement==arr[i]){
    //         arr.erase(arr.begin()+i);
    //       }else{
    //           i++;
    //       }
    //       if(arr.size()==0){
    //           return -1;
    //       }
    //       }
    //       int SecondlargestElement=arr[0];
    //       for(int i=0;i<arr.size()-1;i++){
    //         if(SecondlargestElement<arr[i+1]){
    //             SecondlargestElement=arr[i+1];
    //         }

    // }
    // if(largestElement>SecondlargestElement){
    //     return SecondlargestElement;
    // }else{
    //     return -1;
    // }
    //     }
    //     };
    //*------------------------------------------------------------------------------------------------------------
