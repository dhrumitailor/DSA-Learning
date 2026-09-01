class Solution {
public:
    vector<int> count_NGE(vector<int> &arr, vector<int> &indices) {
        // Your code goes here
        vector<int> ans;

        for(int i: indices){
            int count = 0 ;

            for(int j = i+1 ; j < arr.size(); j++){
                if(arr[j]> arr[i]){
                    count++;
                }
            }

            ans.push_back(count);
        }
        return ans;
    }
};