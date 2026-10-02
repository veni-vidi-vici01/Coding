#include<iostream>
using namespace std;
int main(){
    int n=4;
char alphabet[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
for(int i=0;i<n;i++){
    for(char j=alphabet[0];j<=alphabet[i];j++){
        cout<<j;
    }
    cout<<endl;
}
return 0;
}
// void pattern14(int n){
//         for(int i=0; i<n; i++){
//             char letter = 'A';
            
//             for(int j=0; j<i+1; j++){
//                 cout << letter;
//                 letter +=1;
//             }
//             cout << endl;
//         }
//     }