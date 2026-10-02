-------------------------------------------------Brute---------------------------------------------------
class Solution {
public:
    int myAtoi(string s) {
        int temp = INT_MIN;
        rem_space(s, 0);
        if (s.length() > 0 && s[0] == '+') {
            temp = 1;
            s.erase(s.begin());
        } else if (s.length() > 0 && s[0] == '-') {
            temp = 0;
            s.erase(s.begin());
        }
        long long a = printnum(s, 0, 0);
        if (temp == 0) {
            a = -a;
        }
        if (a > 2147483647) {                 
            return 2147483647;                
        }                                       
        if (a < -2147483648) {                 
            return -2147483648;
        }
        return a;
    }
    long long printnum(string& s, int i, long long num) {
        if (num > 2147483647) {
            return 2147483648;
        }
        if (i >= s.length() || (s[i] < '0' || s[i] > '9'))
            return num;
        num = 10 * num + (s[i] - '0');
        return printnum(s, i + 1, num);
    }
    string rem_space(string& s, int i) {
        if (i >= s.length()) {
            return s;
        }
        if (s[i] != ' ') {
            return s;
        }
        s.erase(s.begin() + i);
        return rem_space(s, i);
    }
};
-----------------------------------------------optimal(Recursive)--------------------------------------------------------------
//* s.erase in recursive function takes O(n) time complexity , so i changed that....
class Solution {
public:
    int myAtoi(string s) {
        int temp = INT_MIN;
        int b=rem_space(s, 0);
        if (s.length() > 0 && s[b] == '+') {
            temp = 1;
            s.erase(s.begin()+b);
        } else if (s.length() > 0 && s[b] == '-') {
            temp = 0;
            s.erase(s.begin()+b);
        }
        long long a = printnum(s, b, 0);
        if (temp == 0) {
            a = -a;
        }
        if (a > 2147483647) {
            return 2147483647;
        }
        if (a < -2147483648) {
            return -2147483648;
        }
        return a;
    }
    long long printnum(string& s, int i, long long num) {
        if (num > 2147483647) {
            return 2147483648;
        }
        if (i >= s.length() || (s[i] < '0' || s[i] > '9'))
            return num;
        num = 10 * num + (s[i] - '0');
        return printnum(s, i + 1, num);
    }
    int rem_space(string& s, int i) {
        if (i >= s.length()) {
            return i;
        }
        if (s[i] != ' ') {
            return i;
        }
        return rem_space(s, i+1);
    }
};