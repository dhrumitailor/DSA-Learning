class Solution {
public:
    int divide(int dividend, int divisor) {
      // 1. Handle overflow edge case
        if (dividend == INT_MIN && divisor == -1) return INT_MAX;

        // 2. Determine sign and convert to positive 64-bit numbers
        bool isNegative = (dividend < 0) ^ (divisor < 0);
        long long a = std::labs((long long)dividend);
        long long b = std::labs((long long)divisor);
        long long quotient = 0;

        // 3. Single loop: test bits from highest (2^31) down to lowest (2^0)
        for (int i = 31; i >= 0; --i) {
            // Check if (b * 2^i) fits inside 'a'
            if ((a >> i) >= b) {
                quotient += (1LL << i); // Add 2^i to quotient
                a -= (b << i);          // Subtract (b * 2^i) from remainder
            }
        }

        return isNegative ? -quotient : quotient;

        //if(dividend == INT_MIN && divisor ==-1){
          //  return INT_MAX;
        //}
          // int ans = dividend/ divisor;
         //return ans;

        // long long a = abs((long long)dividend);
        // long long b = abs((long long)divisor);
        // int ans = 0 ;

        // while(a>=b){
        //  long long temp = b;
        //     int count = 1;

        //     while (a >= (temp << 1)) {
        //         temp <<= 1;
        //         count <<= 1;
        //     }

        //     a -= temp;
        //     ans += count;
        // }
        // if((dividend <0)!=(divisor<0)){
        //     ans = -ans;
        // }
        // return ans;
    }
};