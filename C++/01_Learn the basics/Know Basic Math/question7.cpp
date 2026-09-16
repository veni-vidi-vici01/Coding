#include <iostream>
using namespace std;
int main() { 
  int n=66;
  int divisor = 0;
for (int i = 2; i < n; i++) {
    if (n % i == 0) {
        divisor++;
    }
}
if (divisor == 0&&n!=0&&n!=1) {
    cout << "The number is prime number";
} else {
    cout << "The number is not a prime number";
}
return 0;
}