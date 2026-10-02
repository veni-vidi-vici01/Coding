#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> countFrequency(vector<int>&arr){
    vector<vector<int>> vec;
    unordered_map<int,int> Num_Freq;
    for(auto i:arr){
        Num_Freq[i]+=1;
    }
    for(auto it: Num_Freq){
        vec.push_back({it.first,it.second});
    }
    return vec;
}


int main(){

    return 0;
}


// vector<int> num = {1,2,2,1,3};
// vector<vector<int>> vec;
// vector<vector<int>>fun(vector<int>&nums){
// for (auto i = nums.begin(); i != nums.end(); i++)            
// {
// int duplicate = 0;
//     for (auto j = nums.begin(); j != nums.end(); j++)
//     {
//         if(*i == *j)
//         {
//             duplicate++;
//         }
//     }
//     vec.push_back({*i, duplicate});
// }

// return vec;
// }
// int main() {
//     vector<vector<int>> result = fun(num);  //! in these if i use unordered set then the element will not repeat
//     for (auto row : result) {
//         for (auto x : row) {
//             cout << x << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


