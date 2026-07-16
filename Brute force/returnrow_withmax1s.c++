class Solution {
public:
    int rowWithMax1s(vector<vector<int>>& mat) {

        int n = mat.size();
        int m = mat[0].size();   //"find the number of columns in the matrix."

        int maxOnes = 0;
        int ans = -1;

        for (int i = 0; i < n; i++) {

            int count = 0;

            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 1)
                    count++;
            }

            if (count > maxOnes) {
                maxOnes = count;
                ans = i;
            }
        }

        return ans;
    }
};