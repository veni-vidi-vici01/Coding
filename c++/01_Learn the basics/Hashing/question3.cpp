#include<bits/stdc++.h>
using namespace std;
int mostfrequency(vector<int>& nums){
    unordered_map<int,int> Num_Freq;
    for(auto i:nums){
        Num_Freq[i]+=1;
    }
    auto j=Num_Freq.begin();
    int temp1=j->first;
    int temp2=j->second;
    for(auto it:Num_Freq) {
       if(temp2<it.second){
          temp2=it.second;
          temp1=it.first;
       }else if(temp2==it.second&&temp1>it.first){
        temp1=it.first;
       }
    } 
    return temp1;
    }
    int main(){
    vector<int> ex={1,2,2,3,3,3};
    cout<<mostfrequency(ex);
    return 0;
    }
    
