class Solution {
public:
    int findKRotation(vector<int>& nums) {

        int low = 0;
        int high = nums.size() - 1;

        int ans = INT_MAX;
        int index = -1;

        while(low <= high) {

            int mid = low + (high - low) / 2;

            // Left half is sorted
            if(nums[low] <= nums[mid]) {

                if(nums[low] < ans) {
                    ans = nums[low];
                    index = low;
                }

                low = mid + 1;
            }

            // Right half is sorted
            else {

                if(nums[mid] < ans) {
                    ans = nums[mid];
                    index = mid;
                }

                high = mid - 1;
            }
        }

        return index;
    }
};

//m2
class Solution {
public:
    int findKRotation(vector<int>& nums) {

        int mini = nums[0];
        int index = 0;

        for(int i = 1; i < nums.size(); i++) {

            if(nums[i] < mini) {
                mini = nums[i];
                index = i;
            }
        }

        return index;
    }
};
