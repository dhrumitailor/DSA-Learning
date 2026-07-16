class Solution {
public:
    int findMin(vector<int>& nums) {

        int low = 0;
        int high = nums.size() - 1;
        int ans = INT_MAX;

        while(low <= high) {

            int mid = low + (high - low) / 2;

            // Left half is sorted
            if(nums[low] <= nums[mid]) {

                ans = min(ans, nums[low]);
                low = mid + 1;
            }

            // Right half is sorted
            else {

                ans = min(ans, nums[mid]);
                high = mid - 1;
            }
        }

        return ans;
    }
};


//m2
class Solution {
public:
    int findMin(vector<int>& nums) {

        int mini = nums[0];

        for(int i = 1; i < nums.size(); i++) {
            mini = min(mini, nums[i]);
        }

        return mini;
    }
};
