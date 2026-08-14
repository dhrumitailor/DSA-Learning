class Solution{
    public:
        vector<vector<int>> primeFactors(vector<int>& queries){
            //your code goes here
          vector<vector<int>>ans;

          for(int n : queries){
            vector<int> factor;
            for(int i = 2 ; i <= n ; i++){
                while(n%i== 0){
                    factor.push_back(i);
                    n = n/i;
                }
            }
            ans.push_back(factor);
          }  
          return ans;
        }
};