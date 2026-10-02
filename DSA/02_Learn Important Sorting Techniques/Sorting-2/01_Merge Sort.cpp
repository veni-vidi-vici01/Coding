 #include<bits/stdc++.h>
 using namespace std;
 void merge(vector<int>&arr,int low,int mid,int high);
 void mergeSort(vector<int>& arr, int l, int r) {            //! The l and r are used to define the part of array we are working on
       if(l==r){
           return;
       }
        int mid=(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
        
    }
void merge(vector<int>&arr,int low,int mid,int high){
        vector<int> temp;
        int left=low;                              //*The number of independent position we want to track is the number of pointer we use 
        int right=mid+1;
        while(left<=mid&&right<=high){
            if(arr[left]<=arr[right]){
                temp.push_back(arr[left]);
                left++;
            }else{
            temp.push_back(arr[right]);
            right++;
            }
        }
            while(left<=mid){
               temp.push_back(arr[left]);
               left++;
            }
            while(right<=high){
               temp.push_back(arr[right]);
               right++;
            }
            for(int i=low;i<=high;i++){
                arr[i]=temp[i-low];
                }
        }
        int main(){
            vector<int> v={2,3,4,1,2,4,-1};
            mergeSort(v,0,6);
            for(auto i:v){
                cout<<i<<endl;
            }

        }
//  class Solution {
//   public:
//     void mergeSort(vector<int>& arr, int l, int r) {
//        if(l==r){
//            return;
//        }
//         int mid=(l+r)/2;
//         mergeSort(arr,l,mid);
//         mergeSort(arr,mid+1,r);
//         merge(arr,l,mid,r);
        
//     }
//     void merge(vector<int>&arr,int low,int mid,int high){
//         vector<int> temp;
//         int left=low;
//         int right=mid+1;
//         while(left<=mid&&right<=high){
//             if(arr[left]<=arr[right]){
//                 temp.push_back(arr[left]);
//                 left++;
//             }else{
//             temp.push_back(arr[right]);
//             right++;
//             }
//         }
//             while(left<=mid){
//                temp.push_back(arr[left]);
//                left++;
//             }
//             while(right<=high){
//                temp.push_back(arr[right]);
//                right++;
//             }
//             for(int i=low;i<=high;i++){
//                 arr[i]=temp[i-low];
//                 }
//         }
// };