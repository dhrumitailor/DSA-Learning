class Solution {
public:

    void solve(int n, string s, vector<string> &ans) {

        // Base case
        if (s.length() == n) {
            ans.push_back(s);
            return;
        }

        // Always take 0
        solve(n, s + '0', ans);

        // Take 1 only if previous is not 1
        if (s.empty() || s.back() != '1') {
            solve(n, s + '1', ans);
        }
    }

    vector<string> generateBinaryStrings(int n) {

        vector<string> ans;

        solve(n, "", ans);

        return ans;
    }
};