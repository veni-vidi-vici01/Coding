--------------------------------------------------New Striver(Optimal)----------------------------
class Solution {
   public:
    vector<char> reverseString(vector<char>& s) {
        reverse(0, s);
        return s;
    }
    void reverse(int i, vector<char>& s) {
        if (i >= s.size() / 2) {
            return;
        }
        swap(s[i], s[s.size() - 1 - i]);
        reverse(i + 1, s);
    }
};