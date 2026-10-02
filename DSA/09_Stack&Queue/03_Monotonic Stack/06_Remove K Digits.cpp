---------------------------------------------Brute--------------------------
class Solution {
public:
    string removeKdigits(string nums, int k) {
        vector<string> v;
        vector<string> m;
        string ds;
      
        printS(0, ds, nums, nums.size(), v);   //Generating all the subsequences
        
        for (auto i : v) {
            if (i.size() == nums.size() - k) {   //Pushing the subsequenes of required length
                m.push_back(i);              
            }
        }
        
        if (m.empty()) return "0";              //Sorting in ascending order
        
        sort(m.begin(), m.end());
        int i = 0;
        while (i < m[0].size() && m[0][i] == '0') {
            i++;
        }
        
        m[0] = m[0].substr(i);                                 //Removing leading zeroes
        if (m[0].empty()) return "0";
        
        return m[0];
    }

    void printS(int ind, string &ds, string &nums, int n, vector<string> &v) {
        if (ind == n) {
            v.push_back(ds);
            return; 
        }
        ds.push_back(nums[ind]);
        printS(ind + 1, ds, nums, n, v);

        ds.pop_back();
        printS(ind + 1, ds, nums, n, v);
    }
};
-----------------------------------------Optimal----------------------------
class Solution {
   public:
    string removeKdigits(string nums, int k) {
        stack<char> st;
        / for (int i = 0; i < nums.size(); i++) {
            char digit = nums[i];
            while (!st.empty() && k > 0 && st.top() > digit) {
                st.pop();
                k--;
            }
            st.push(digit);
        }
        while (!st.empty() && k > 0) {
            st.pop();
            k--;
        }

        if (st.empty()) return "0";

        string res = "";

        while (!st.empty()) {
            res.push_back(st.top());
            st.pop();
        }
        while (res.size() > 0 && res.back() == '0') {
            res.pop_back();
        }
        reverse(res.begin(), res.end());

        if (res.empty()) return "0";

        return res;
    }
};
