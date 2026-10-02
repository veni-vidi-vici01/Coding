#include<iostream>
#include<vector>
using namespace std;
int gcd(int a, int b) {
    if(a>b){
        vector<int> temp;
        int gcd = 1;
        
        for(int i=b;i>0;i--){
            if(b%i==0){
                temp.push_back(i);
            }
        }
        for(int j=0;j<temp.size();j++){
            if(a%temp[j]==0){
                return temp[j];
            }
        }
    }
    else {
        vector<int> temp1;
        
        for(int i=a;i>0;i--){
            if(a%i==0){
                temp1.push_back(i);
            }
        }
        for(int j=0;j<temp1.size();j++){
            if(b% temp1[j]==0){
                return temp1[j];
            }
        }
    }
    return 1;
}

int main(){
cout<<gcd(6,24);
return 0;
}
/*int gcd(int a, int b) {
    
        vector<int> temp;
        int gcd = 1;
        
        for(int i=b;i>0;i--){
            if(b%i==0){
                temp.push_back(i);
            }
        }
        for(int j=0;j<temp.size();j++){
            if(a%temp[j]==0){
                return temp[j];
            }
        }
    return 1;
    }*/
 ------------------------------------------------New Striver(Gcd)(Optimal)---------------------
   class Solution {
public:
    int GCD(int n1,int n2) {
     while(min(n1,n2)>0){
        int a =min(n1,n2);
        int b=max(n1,n2);
        n1=b%a;
        n2=a;
     }
     return max(n1,n2);
    }
};