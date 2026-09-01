class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {

        long long ans = 0;
        int n = arr.size();

        for (int i = 0; i < n; i++) {

            int mini = arr[i];

            for (int j = i; j < n; j++) {

                mini = min(mini, arr[j]);

                ans += mini;
                ans %= 1000000007;
            }
        }

        return ans;
    }
};