----------------------------------------------------Brute-----------------------
class Solution {
   public:
    vector<int> nextSmallerElements(const vector<int>& arr) {
        vector<int> v;
        for (int i = 0; i < arr.size(); i++) {
            int n = v.size();
            for (int j = i + 1; j < arr.size(); j++) {
                if (arr[j] < arr[i]) {
                    v.push_back(arr[j]);
                    break;
                }
            }
            if (v.size() == n) {
                v.push_back(-1);
            }
        }
        return v;
    }
};
----------------------------------------optimal--------------------------------------
class Solution {
   public:
    vector<int> nextSmallerElements(const vector<int>& arr) {
        int n = arr.size();

        vector<int> ans(n);

        stack<int> st;

        for (int i = n - 1; i >= 0; i--) {
            int currEle = arr[i];

            while (!st.empty() && st.top() >= currEle) {
                st.pop();
            }

            if (st.empty())
                ans[i] = -1;

            else
                ans[i] = st.top();

            st.push(currEle);
        }

        return ans;
    }
};
