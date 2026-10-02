--------------------------------------------------Optimal-----------------------------------------
class Solution {
public:
    bool isPalindrome(int x) {
        long long int revnum = 0;
        int i = 0;
        int temp = x;
        while (temp > 0) {

            i = temp % 10;
            revnum = revnum * 10 + i;

            temp /= 10;
        }
        return x==revnum;
    }
};
