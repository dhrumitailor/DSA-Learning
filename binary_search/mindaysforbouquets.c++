class Solution {
public:
    bool possible(vector<int>& bloomDay, int m, int k, int day) {
        int flowers = 0;
        int bouquets = 0;

        for (int i = 0; i < bloomDay.size(); i++) {

            if (bloomDay[i] <= day)
                flowers++;
            else
                flowers = 0;

            if (flowers == k) {
                bouquets++;
                flowers = 0;   // flowers used in one bouquet
            }
        }

        return bouquets >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {

        if ((long long)m * k > bloomDay.size())
            return -1;

        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (possible(bloomDay, m, k, mid))
                high = mid - 1;
            else
                low = mid + 1;
        }

        return low;
    }
};