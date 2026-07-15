class Solution {
public:

    bool possible(vector<int>& weights, int days, int capacity) {

        int currentWeight = 0;
        int requiredDays = 1;

        for (int w : weights) {

            if (currentWeight + w <= capacity)
                currentWeight += w;
            else {
                requiredDays++;
                currentWeight = w;
            }
        }

        return requiredDays <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) {

        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (possible(weights, days, mid))
                high = mid - 1;
            else
                low = mid + 1;
        }

        return low;
    }
};