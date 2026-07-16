class Solution {
public:

    long long power(long long base, int exp, int m) {

        long long result = 1;

        for(int i = 1; i <= exp; i++) {
            result *= base;

            if(result > m) {
                return result;
            }
        }

        return result;
    }

    int nthRoot(int n, int m) {

        int low = 1;
        int high = m;

        while(low <= high) {

            int mid = low + (high - low) / 2;

            long long value = power(mid, n, m);

            if(value == m) {
                return mid;
            }
            else if(value < m) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return -1;
    }
};

//m2
class Solution {
public:
    int nthRoot(int n, int m) {

        for(int i = 1; i <= m; i++) {

            long long value = 1;

            for(int j = 1; j <= n; j++) {
                value *= i;
            }

            if(value == m) {
                return i;
            }

            if(value > m) {
                break;
            }
        }

        return -1;
    }
};

