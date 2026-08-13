class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int ans = 0 ;

       for(int i = 0 ; i < nums.size(); i++){
        ans ^= nums[i];
       }
       return ans;
    }
};

//m2
class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int ans = 0 ;

     for(int x: nums){
        ans = ans^x;
     }
       return ans;
    }
};