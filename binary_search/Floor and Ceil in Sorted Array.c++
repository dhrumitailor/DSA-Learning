class Solution {
public:

    int findFloor(vector<int>& nums, int x) {

        int low = 0;
        int high = nums.size() - 1;
        int floor = -1;

        while(low <= high) {

            int mid = low + (high - low) / 2;

            if(nums[mid] <= x) {
                floor = nums[mid];
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return floor;
    }

    int findCeil(vector<int>& nums, int x) {

        int low = 0;
        int high = nums.size() - 1;
        int ceil = -1;

        while(low <= high) {

            int mid = low + (high - low) / 2;

            if(nums[mid] >= x) {
                ceil = nums[mid];
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return ceil;
    }

    vector<int> getFloorAndCeil(vector<int>& nums, int x) {

        return {findFloor(nums, x), findCeil(nums, x)};
    }
}; 

//m2
class Solution {
public:
    vector<int> getFloorAndCeil(vector<int>& nums, int x) {

        int floor = -1;
        int ceil = -1;

        for(int i = 0; i < nums.size(); i++) {

            if(nums[i] <= x) {
                floor = nums[i];
            }

            if(nums[i] >= x) {
                ceil = nums[i];
                break;
            }
        }

        return {floor, ceil};
    }
};