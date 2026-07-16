class Solution {
public:
    int findMedian(vector<vector<int>> &matrix) {

        vector<int> arr;

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                arr.push_back(matrix[i][j]);
            }
        }

        sort(arr.begin(), arr.end());

        return arr[arr.size() / 2];
    }
};