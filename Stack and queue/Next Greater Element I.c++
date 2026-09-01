class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;

        for(int x :  nums1){
            int i = 0;

            while(nums2[i] !=x){
                i++;
            }
            int j = i+1 ;

            while(j < nums2.size() && nums2[j]<= x ){
                j++;
            }

            if(j == nums2.size()){
                ans.push_back(-1);
            }
            else{
                ans.push_back(nums2[j]);
            }

        }
        return ans;
    }
};