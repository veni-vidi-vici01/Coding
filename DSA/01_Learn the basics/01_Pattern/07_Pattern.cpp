#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n = 4;

for(int i=0; i<n; i++){
    //spaces
    for(int j=0; j<n-i-1; j++){
        cout << " ";
    }

    //stars{
    for(int j=n-i-1; j<= n+i-1; j++){
        cout << "*";
    }
    cout << endl;
}
    
return 0;
}


//! ============================================================================================

// for(int i=0; i<n; i++){
//     //spaces
//     for(int j=0; j<n-i-1; j++){
//         cout << " ";
//     }

//     //stars{
//     for(int j=0; j<= 2*i+1; j++){
//         cout << "*";
//     }
//     cout << endl;
// }
