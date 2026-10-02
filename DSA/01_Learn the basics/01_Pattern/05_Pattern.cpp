//   *****
//   ****
//   ***
//   **
//   *

#include<bits/stdc++.h>
using namespace std; 

class Pattern {
public:
    void pattern4(int n) {
        for(int i=n; i>=0; i--){
            for(int j=0; j<i; j++){
                cout << "*";
            }
            cout << endl;
        }
    }
};


int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;

    Pattern p;
    p.pattern4(n);

  return 0;
}