class Solution {
public:

    double power(double x, long long n) {

        // Base case
        if (n == 0) {
            return 1;
        }

        // If exponent is even
        if (n % 2 == 0) {
            return power(x * x, n / 2);
        }

        // If exponent is odd
        return x * power(x * x, (n - 1) / 2);
    }

    double myPow(double x, int n) {

        // Convert to long long to handle INT_MIN
        long long N = n;

        // Handle negative exponent
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }

        return power(x, N);
    }
};