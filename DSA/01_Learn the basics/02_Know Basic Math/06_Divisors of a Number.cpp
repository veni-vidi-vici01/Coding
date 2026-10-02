#include <iostream>
using namespace std;
int main() {
   int n=12;
   for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
        cout << i << endl;
    }
}

    return 0;
}
-----------------------------------------------New Striver(Brute)----------------------------------------
class Solution {
public:
    vector<int> divisors(int n) {
        vector<int> v;
      for(int i=1;i<=n;i++){
        if(n%i==0){
            v.push_back(i);
        }
      }
      return v;
    }
};
------------------------------------------------Optimal---------------------------------------------
class Solution {
   public:
    vector<int> divisors(int n) {
        if (n <= 1) {
            return {n};
        }
        vector<int> v;
        int a = sqrt(n);
        for (int i = 1; i <= a; i++) {
            if (n % i == 0) {
                v.push_back(i);
                if (i != n / i) {
                    v.push_back(n / i);
                }
            }
        }
        sort(v.begin(), v.end());
        return v;
    }
};