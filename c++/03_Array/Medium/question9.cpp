-----------------------------------------------Brute-----------------------------------------
class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> v;
        for(int i=0;i<arr.size();i++){
            int temp=-1;
            for(int j=i+1;j<arr.size();j++){
                if(arr[i]<arr[j]){
                    temp++;
                }
            }
            if(temp==-1){
                v.push_back(arr[i]);
            }
        }
        return v;
        
    }
};
--------------------------------------------Optimal--------------------------------------------
class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> v;
        int temp =arr[arr.size()-1];
        v.push_back(temp);
        for(int i=arr.size()-2;i>-1;i--){
            if(temp<=arr[i]){
                temp=arr[i];
                v.push_back(temp);
            }
        }
        reverse(v.begin(),v.end());
        return v;
    }
};