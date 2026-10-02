----------------------------------------------Optimal------------------------------------------
class Solution {
  public:
    vector<int> findSubarray(vector<int>& arr) {
        
        int n = arr.size();
        
        int sum = 0;
        int max_sum = arr[0];
        
        int end = 0 ;
        int start = 0 ;
        int ans_start = 0 ;
        
        for(int i = 0; i < n; i ++){
            
            if( sum == 0){
                start = i;
            }
            
            sum = sum + arr[i];
            
            if( sum > max_sum){
                maxima = sum;
                ans_start = start;
                end = i;
                
            }
            
            if( sum < 0){
                sum = 0;
            }
            
        }
        return vector<int>(arr.begin() + ans_start , arr.begin() + end + 1); ;
    }
}; 







Similar Question in gfg practice.....................
 
Q.)Given an array of integers arr[], find the contiguous subarray with the maximum sum that
contains only non-negative numbers. If multiple subarrays have the same maximum sum return the 
one with longest length. If there is still a tie, return the subarray with the smallest starting index.
If the array contains only negative numbers, return -1.
-----------------------------------------------brute-------------------------------------------------
class Solution {
  public:
    vector<int> findSubarray(vector<int>& arr) {
        int check = -1;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] >= 0){
                check = 1;
                break;
            }
        }
        if(check == -1){
            return {-1};
        }

        int sum = 0;
        int max_sum = 0;
        int start = 0;
        int end;
        int temp1 = 0;
        int temp2 = 0;
        int temp3 = 0;
        vector<int> v;
        map<int, int> start_end;

        for(int i = 0; i < arr.size(); i++){
            if(arr[i] >= 0){
                sum += arr[i];

                if(sum > max_sum){
                    max_sum = sum;
                    end = i;
                    start_end.clear(); // Clear lower sum entries
                    start_end[start] = end;
                } 
                
                else if(sum == max_sum){
                    end = i;
                    start_end[start] = end;
                }
            } else {
                sum = 0;
                start = i + 1; 
            }
        }

        
        for(auto i : start_end){
            int len = i.second - i.first + 1;
            if(len > temp3){
                temp1 = i.second;
                temp2 = i.first;
                temp3 = len;
            }
        }

        for(int i = temp2; i <= temp1; i++){
            v.push_back(arr[i]);
        }
        return v;
    }
};
-----------------------------------------------Optimal--------------------------------------------
class Solution {
  public:
    vector<int> findSubarray(vector<int>& arr) {
        int check = -1;
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] >= 0){
                check = 1;
                break;
            }
        }
        
        if(check == -1){
            return {-1};
        }

        int sum = 0;
        int max_sum = 0;
        int start = 0;
        int end = 0;
        int temp1 = 0;
        int temp2 = 0;
        int temp3 = 0;
        vector<int> v;

        for(int i = 0; i < arr.size(); i++){
            
            if(arr[i] >= 0){
                sum += arr[i];
                end = i;

                int len = end - start + 1;

                if(sum > max_sum){
                    max_sum = sum;
                    temp1 = end;
                    temp2 = start;
                    temp3 = len;
                } 
                
                else if(sum == max_sum){
                    if(len > temp3){
                        temp1 = end;
                        temp2 = start;
                        temp3 = len;
                    }
                }
            } 
            else {
                sum = 0;
                start = i + 1; 
            }
        }

        for(int i = temp2; i <= temp1; i++){
            v.push_back(arr[i]);
        }

        return v;
    }
};