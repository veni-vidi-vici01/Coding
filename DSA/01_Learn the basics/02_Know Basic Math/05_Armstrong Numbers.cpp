#include <iostream>
using namespace std;
int cube (int x){
int y=x*x*x;
return y;
}
int main() {
    int n = 153; 
    int temp = n;
    int temp2 = n;
    int count = 0;
    if(n==0){
    count=1;
    }
    while (temp > 0) {
            count++;
        
        temp /= 10;
    }
    int sum = 0;
    
    for (int j = 0; j < count; j++) {
        int i = temp2 % 10;
        sum = sum + cube(i);
        temp2 /= 10;
    }
    cout<<sum<<endl;
     if(sum == n) {
        cout << "The number is Armstrong" << endl;
    } else {
        cout << "The number is not Armstrong" << endl;
    }
    return 0;
}

   