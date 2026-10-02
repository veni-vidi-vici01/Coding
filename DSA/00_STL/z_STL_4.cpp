#include<iostream>
#include<functional>
#include<algorithm>
 
using namespace std;
 
int main(){

//todo: ------------------ sort -----------------------

//! syntax for sorting in ascending order ---> sort(address of first element, address of last element);
// Function Objects (Functor) : A function wrapped in a class so that it is available like an object

//=================================================================================
//! STL algorithms work on ranges [start, end) — end is never included
//=================================================================================

    int arr[] = {1, 73, 4, 2, 54, 7};
    sort(arr,arr+5);
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }

    cout<<"-----------------------------------" <<endl;

//!todo:------------------ sort the array in descending order -------------------------
//! syntax ---> sort( arr, arr+6, greater< int >( ));

    sort(arr , arr+6 , greater< int >( ));
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}