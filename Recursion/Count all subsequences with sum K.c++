class Solution{
    public:    	

    int solve(int index, vector<int>& nums,int sum, int k){
        if(index == nums.size()){
            if(sum==k){
                return 1;
            }
            return 0;
        }
        int take = solve(index+1 , nums , sum + nums[index] , k);
        int not_take = solve(index+1 , nums , sum  , k);
        return take+ not_take;
    }
    int countSubsequenceWithTargetSum(vector<int>& nums, int k){
    	//your code goes here
        return solve(0 , nums , 0 , k)- (k==0);
    }
};