--------------------------------------------------------New Striver(optimal)-------------------------
class Solution {
   public:
    bool checkPrime(int num) {
        if (num <= 1) {
            return false;
        }
        return prime(2, num);
    }
    bool prime(long long i, int num) {
        if (i * i > num) {
            return true;
        }
        if (num % i == 0) {
            return false;
        }
        return prime(i + 1, num);
    }
};