-------------------------------------------------Optimal------------------------------------------------
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        string s;
        Parentheses(v, s,2*n);
        return v;
    }
    void Parentheses(vector<string> &v, string &s, int n)
    {
        if (s.size() == n)
        {
            v.push_back(s);
            return;
        }
        int open_count = count(s.begin(), s.end(), '(');    //count(from ith position,to j+1 position,which element to count)
        int close_count = s.size() - open_count;            // the above stl function from ith to jth count the element 
    if (open_count < n / 2) {
        s.push_back('(');
        Parentheses(v, s, n);
        s.pop_back();
    }

    if (close_count < open_count) {
        s.push_back(')');
        Parentheses(v, s, n);
        s.pop_back();
    }
    }
};