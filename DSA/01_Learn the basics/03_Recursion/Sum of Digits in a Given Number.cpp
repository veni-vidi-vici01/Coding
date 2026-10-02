----------------------------------------------New Striver(Optimal)----------------------------------------
class Solution {
   public:
    int addDigits(int num) {
        int b = 0;
        int a = Digits(num, 0);
        if (a <= 9) {
            return a;
        }
        b = addDigits(a);
        return b;
    }
    int Digits(int num, int sum) {
        if (num <= 0) {
            return sum;
        }
        sum += num % 10;
        return Digits(num / 10, sum);
    }
};