class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        int low = 0;
        int high = nums.size() - 1;

        while(low < high){

            int mid = low + (high - low) / 2;

            // If mid is even
            if(mid % 2 == 0){

                // Pair is correct
                if(nums[mid] == nums[mid + 1]){
                    low = mid + 2;      // Search right
                }
                else{
                    high = mid;         // Search left
                }
            }

            // If mid is odd
            else{

                // Pair is correct
                if(nums[mid] == nums[mid - 1]){
                    low = mid + 1;      // Search right
                }
                else{
                    high = mid;         // Search left
                }
            }
        }

        // low == high
        return nums[low];
    }
};

//m2
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        int n = nums.size();

        if(n == 1) {
            return nums[0];
        }

        if(nums[0] != nums[1]) {
            return nums[0];
        }

        if(nums[n - 1] != nums[n - 2]) {
            return nums[n - 1];
        }

        for(int i = 1; i < n - 1; i++) {

            if(nums[i] != nums[i - 1] && nums[i] != nums[i + 1]) {
                return nums[i];
            }
        }

        return -1;
    }
};