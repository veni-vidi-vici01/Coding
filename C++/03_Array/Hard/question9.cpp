-------------------------------------------------------Brute---------------------------------------------
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        vector<int> v;
        for(int i=0;i<arr.size();i++){
            int count=0;
            for(int j=0;j<arr.size();j++){
                if(arr[i]==arr[j]&&i!=j){
                    count++;
                }
            }
             if(count==1){
                    v.push_back(arr[i]);
                    break;
                }
        }
        for(int i=0;i<arr.size();i++){
            int miss_num=0;
            for(int j=0;j<arr.size();j++){
                if((i+1)==arr[j]){
                    miss_num++;
                }
            }
            if(miss_num==0){
                v.push_back(i+1);
                break;
                }
        }
        return v;
    }
};
------------------------------------------------------Better----------------------------------------------------------------
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        vector<int> v;
        unordered_map<int,int> Num_Freq;
        for(int i=0;i<arr.size();i++){
            Num_Freq[arr[i]]+=1;
        }
        for(auto i:Num_Freq){
            if(i.second==2){
                v.push_back(i.first);
                break;
            }
        }
        for(int i=0;i<arr.size();i++){
            if(Num_Freq.find(i+1)==Num_Freq.end()){
                v.push_back(i+1);
                break;
            }
        }
        return v;
    }
};
---------------------------------------------------Optimal------------------------------------------------------------------
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        long long n = arr.size();

        long long sum = 0;
        long long sum_square = 0;

        for (int i = 0; i < n; i++) {
            sum += arr[i];
            sum_square += 1LL * arr[i] * arr[i];         //1LL stands for long long 
        }

        long long temp = n * (n + 1) / 2;
        long long miss_subrepeating = temp - sum;

        long long temp2 = n * (n + 1) * (2 * n + 1) / 6;
        long long misssq_subrepeatingsq = temp2 - sum_square;

        long long a = misssq_subrepeatingsq / miss_subrepeating;

        int missing = (a + miss_subrepeating) / 2;
        int repeating = missing - miss_subrepeating;

        return {repeating, missing};
    }
};