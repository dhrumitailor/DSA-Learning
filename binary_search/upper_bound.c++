class Solution{
public:
    int upperBound(vector<int> &nums, int x){
        int low = 0 ; 
        int high = nums.size()-1;

        int ans = nums.size();

        while(low<=high){
            int index = low+ (high-low)/2;

            if(nums[index]>x){
                ans= index;
                high = index-1;
            }
            else{
                low = index+1;
            }
        }
        return ans;
    }
};


//m2
class Solution{
public:
    int upperBound(vector<int> &nums, int x){
        
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i]>x){
                return i;
            }
        }
        return nums.size();
    }
};