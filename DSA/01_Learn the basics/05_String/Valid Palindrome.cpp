--------------------------------------------------Better---------------------------------
class Solution {
public:
    bool isPalindrome(string s) {
        string a;
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                a+=tolower(s[i]);
        }
    }
     string b;
        b=a;
        reverse(a.begin(),a.end());
    return a==b;
    }
};
----------------------------------------------Optimal--------------------------------------
class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {

            while (left < right && !isalnum(s[left]))
                left++;

            while (left < right && !isalnum(s[right]))
                right--;

            if (tolower(s[left]) != tolower(s[right]))
                return false;

            left++;
            right--;
        }

        return true;
    }
};