//   *****
//   *****
//   *****
//   *****

#include<bits/stdc++.h>
using namespace std; 

class Pattern {
public:
    void pattern1(int n) {
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
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
    p.pattern1(n);

  return 0;
}