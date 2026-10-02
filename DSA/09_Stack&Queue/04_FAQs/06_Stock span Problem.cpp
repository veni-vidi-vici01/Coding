----------------------------------------------------Brute------------------------------------------
class Solution {
   public:
    vector<int> stockSpan(vector<int> arr, int n) {
        vector<int> v;
        v.push_back(1);
        for (int i = 1; i < n; i++) {
            int temp = i;
            int count = 0;
            for (int j = i; j >= 0; j--) {
                if (arr[j] <= arr[temp]) {
                    count++;
                } else {
                    break;
                }
            }
            v.push_back(count);
        }
        return v;
    }
};
----------------------------------------------------Optimal----------------------------------------
class Solution {
   private:
    vector<int> getPSEIndices(const vector<int>& arr, int n) {
        vector<int> pse(n, -1);
        stack<int> st;

        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] <= arr[i]) {
                st.pop();
            }
            if (!st.empty()) {
                pse[i] = st.top();
            }
            st.push(i);
        }
        return pse;
    }

   public:
    vector<int> stockSpan(vector<int> arr, int n) {
        vector<int> pseIndices = getPSEIndices(arr, n);
        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            int pseIdx = pseIndices[i];
            if (pseIdx == -1) {
                v[i] = i + 1;
            } else {
                v[i] = i - pseIdx;
            }
        }
        return v;
    }
};