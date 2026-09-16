#include <iostream>
using namespace std;
int main() {
int n=6;
char letter = 'A';
letter += n - 1;
for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
        cout << letter;
        letter++;
    }
    letter -= i +2;
    cout << endl;
    }
return 0;
}