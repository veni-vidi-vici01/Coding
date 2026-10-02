-----------------------------------------------------Optimal--------------------------------------------
class Solution {
   public:
    int countOddDigit(int n) {
        if (n == 0) {
            return 0;
        }
        int count_odd = 0;
        while (n > 0) {
            int a = n % 10;
            if (a % 2 != 0) {
                count_odd++;
            }
            n /= 10;
        }
        return count_odd;
    }
};