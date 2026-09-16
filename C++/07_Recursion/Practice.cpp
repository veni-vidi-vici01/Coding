#include<bits/stdc++.h>
using namespace std;
//! Print name N times.
// void fun(int i , int n){
//     if(i>n) return;
//     cout<<"Arshad"<<endl;
//     fun(i+1,n);
// }
// int main(){
//     fun(1,5);
//     return 0;
// }
//! Print Linearly from 1 to N (Method 1)
// void fun(int i, int N){
//     if(i>N) return;
//     cout<<i<<endl;
//     fun(i+1,N);
// }
// int main(){
//     fun(1,5);
//     return 0;
// }
//! Print from 1 to N (Method 2)
// void fun(int i, int N){
//     if(i==0){
//        return;
//     }
//     fun(i-1,N);
//     cout<<i<<endl;
// }
// int main(){
//     fun(5,5);
//     return 0;
// }
//! Print from 1 to N (Method 3)
// void fun(int i, int N){
//     if(N-i==N) return;
//     cout<<N-i+1<<endl;
//     fun(i-1,N);
// }
// int main(){
//     fun(5,5);
//     return 0;
// }
//! Print from N to 1 (Method 1)
// void fun(int i, int N){
//     if(i==0) return ;
//     cout<<i<<endl;
//     fun(i-1,N);
// }
// int main(){
//     fun(5,5);
// }
//! Print from N to 1 (Method 2)
// void fun(int i, int N){
//     if(i>N) return ;
//     fun(i+1,N);
//     cout<<i<<endl;
// }
// int main(){
//     fun(1,5);
// }
//! Print from N to 1 (Method 3)
// void fun(int i, int N){
//     if(i>N) return ;
//     cout<<N-i+1<<endl;
//     fun(i+1,N);
// }
// int main(){
//     fun(1,5);
// }
//! Sum of N number using Functional
// int sum(int n){
//     int add;
//     if(n==0){
//         return 0;
//     }
//     add=n+sum(n-1);
//     return add;                    //*Function returns the answer hence Functonal.
// }
// int main(){
//     cout<<sum(5);
//     return 0;
// }
//! Sum of N number using Parametric method
// int add(int i,int sum){
//     if(i==0){
//         cout<<sum;
//     }
//     add(i-1,sum+i);
// }
// int main(){
//     add(5,0);
//     return 0;
// }
//! factorial of N number using Functional Method 
// int factorial(int n){
//     int mul;
//     if(n==0){
//         return 1;
//     }
//     mul=n*factorial(n-1);
//     return mul;
// }
// int main(){
//     cout<<factorial(5);
//     return 0;
// }
//! factorial of N number using Parametric method
// void factorial(int n, long long int mul){
//     if(n==0){
//         cout<<mul;
//     }
//     factorial(n-1,mul*n);
// }
// int main(){
//     factorial(5,1);
//     return 0;
// }
//! Reverse an array using recursion
// void reverse(int arr[],int i, int j,int n){
//     if(i>=j){
//         for(int k=0;k<n;k++){
//              cout<<arr[k]<<endl;
//         } 
//         return;
//     }
//     int temp =arr[i];
//     arr[i]=arr[j];
//     arr[j]=temp;
// reverse(arr,i+1,j-1,n);
// }
// int main(){
//     int arr[]={3,2,4,1};
//     reverse(arr,0,3,4);
//     return 0;
// }
//! check if the given string is palindrome
// class Solution {
// public:
//     bool isPalindrome(string s) {
//         string v;
//         string v1;
//         int temp = 0;
//         for (int i = 0; i < s.length(); i++) {
//             if (isalnum(static_cast<unsigned char>(s[i]))) {
//                 v.push_back(tolower(static_cast<unsigned char>(s[i])));
//             }
//         }
//         v1 = v;
//         reverse(v, 0, v.length() - 1);
//         if (v == v1) {
//             temp = 1;
//         }
//         return temp;
//     }

//     string reverse(string& a, int i, int j) {
//         if (i >= j) {
//             return a;
//         }
//         swap(a[i], a[j]);
//         reverse(a, i + 1, j - 1);
//         return a;
//     }
// };
//! fibonacchi series
// int fibbo(int n){
//     int sum;
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }
//     sum=fibbo(n-1)+fibbo(n-2);
//     return sum;
// }
// int main(){
//     cout<<fibbo(1);
//     return 0;
// }

