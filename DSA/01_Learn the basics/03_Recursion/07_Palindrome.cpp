#include<iostream>
#include<cstring>
using namespace std;
void reversestring(char s[], int n)
{
    if (n > 1)
    {
        for (int i = 0; i < n - 1; i++)
        {
            int temp = s[i];
            s[i] = s[i + 1];
            s[i + 1] = temp;
        }
        reversestring(s, n - 1);
    }
    
}
int main(){
char name[]="Hello  ";
int length =strlen(name);
reversestring(name,length);
    cout<<name;
return 0;
}
--------------------------------------------------------------Better----------------------------------------------
class Solution {
public:
    bool isPalindrome(string s) {
        string v;
        string v1;
        int temp = 0;
        for (int i = 0; i < s.length(); i++) {
            if (isalnum(static_cast<unsigned char>(s[i]))) {
                v.push_back(tolower(static_cast<unsigned char>(s[i])));
            }
        }
        v1 = v;
        reverse(v, 0, v.length() - 1);
        if (v == v1) {
            temp = 1;
        }
        return temp;
    }

    string reverse(string& a, int i, int j) {
        if (i >= j) {
            return a;
        }
        swap(a[i], a[j]);
        reverse(a, i + 1, j - 1);
        return a;
    }
};
