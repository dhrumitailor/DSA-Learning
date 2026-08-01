class Solution {
  public:


  void solve(int index , vector<int>& nums , int sum , vector<int>& ans){
    if(index == nums.size()){
        ans.push_back(sum);
        return;
    }
    solve(index+1 , nums , sum + nums[index], ans);
    solve(index+1 , nums , sum , ans);
  }
    vector<int> subsetSums(vector<int>& nums) {
        //your code goes here
        vector<int> ans;
        solve(0 , nums , 0 , ans);
        return ans;

    }
};