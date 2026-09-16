 #include<bits/stdc++.h>
 using namespace std;
 //* the array contain element from 1 to n find the missing number
    int missingNum(vector<int>& arr) {
       long long int sum=0;
        long long int misleading=0;
       long long int n=arr.size()+1;
        for(auto i=arr.begin();i<arr.end();i++){
            sum+=*i;
        }
        long long int  ActualSum=(n*(n+1))/2;
         for(auto i:arr){
            if(i>arr.size()+1){
                misleading=i;
            }
         }
        return ActualSum-sum+misleading;
    }
    int main(){
        vector<int> v={2,3,4,5};
      cout<<missingNum(v);
    }