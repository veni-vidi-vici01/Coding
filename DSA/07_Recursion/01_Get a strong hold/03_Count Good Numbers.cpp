------------------------------------------------Optimal------------------------------------------------------------
class Solution {
public:
    const long long MOD = 1000000007;

    long long power(long long base, long long exp) {
        if (exp == 0)
            return 1;

        long long half = power(base, exp / 2);
        half = (half * half) % MOD;

        if (exp % 2 == 0)
            return half;

        return (half * base) % MOD;
    }

    int countGoodNumbers(long long n) {
        long long evenPositions = (n + 1) / 2;
        long long oddPositions = n / 2;

        return (power(5, evenPositions) * power(4, oddPositions)) % MOD;
    }
};