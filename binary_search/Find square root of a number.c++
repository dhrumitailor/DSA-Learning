class Solution {
public:
    int floorSqrt(int n) {

        int low = 1;
        int high = n;
        int ans = 0;

        while(low <= high) {

            int mid = low + (high - low) / 2;

            if((long long)mid * mid <= n) {
                ans = mid;
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return ans;
    }
};

//m2
class Solution {
public:
    int floorSqrt(int n) {

        int ans = 1;

        for(int i = 1; i <= n; i++) {

            if((long long)i * i <= n) {
                ans = i;
            }
            else {
                break;
            }
        }

        return ans;
    }
};
