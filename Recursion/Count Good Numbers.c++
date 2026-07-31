class Solution {
public:

    long long MOD = 1000000007;

    // Binary Exponentiation
    long long power(long long x, long long n) {

        // Base case
        if (n == 0) {
            return 1;
        }

        // If exponent is even
        if (n % 2 == 0) {
            return power((x * x) % MOD, n / 2);
        }

        // If exponent is odd
        return (x * power((x * x) % MOD, (n - 1) / 2)) % MOD;
    }

    int countGoodNumbers(long long n) {

        // Number of even indices
        long long even = (n + 1) / 2;

        // Number of odd indices
        long long odd = n / 2;

        // Total ways
        return (power(5, even) * power(4, odd)) % MOD;
    }
};
