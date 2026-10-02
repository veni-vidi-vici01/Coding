-----------------------------------------------------Better----------------------------------------------------
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
         sort(nums.begin(),nums.end());
        int count=1;
        int longest_cons=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]-nums[i]==1){
                count++;
            }
            if(nums[i+1]-nums[i]!=1&&nums[i+1]-nums[i]!=0){
                count=1;
            }
            if(count>longest_cons){
                longest_cons=count;
            }
        }
        return longest_cons;
    }
};
------------------------------------------------Optimal---------------------------------------------------------
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n =  nums.size();
        if (n == 0) return 0;
        
        int longest = 1;
        unordered_set<int> st;
        
        for (int i = 0; i < n; i++) {
            st.insert(nums[i]);
        }

        for (auto it : st) {
            if (st.find(it - 1) == st.end()) {
                int cnt = 1;
                int x = it;
                
                while (st.find(x + 1) != st.end()) {
                    x = x + 1;
                    cnt = cnt + 1;
                }
                longest = max(longest, cnt);
            }
        }

        return longest;
    }
};