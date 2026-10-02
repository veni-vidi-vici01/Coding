---------------------------------------------------Brute------------------------------------
Similarly like the above question.
------------------------------------------------------Optimal--------------------------------
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
         vector<int> b;
        stack<int> st;
        for (int i = 2 * nums.size() - 1; i >= 0; i--) {
            while (!st.empty() && st.top() <= nums[i % nums.size()]) {
                st.pop();
            }

            if (i < nums.size()) {
                if (st.empty())
                    b.push_back(-1);
                else
                    b.push_back(st.top());
            }

            st.push(nums[i % nums.size()]);
        }

        reverse(b.begin(), b.end());
        return b;
    }
};