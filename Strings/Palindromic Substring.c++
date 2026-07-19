class Solution {
public:

    bool isPalindrome(string str) {

        int left = 0;
        int right = str.size() - 1;

        while (left < right) {

            if (str[left] != str[right]) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }

    string longestPalindrome(string s) {

        string ans = "";

        for (int i = 0; i < s.size(); i++) {

            for (int j = i; j < s.size(); j++) {

                string temp = s.substr(i, j - i + 1);

                if (isPalindrome(temp)) {

                    if (temp.size() > ans.size()) {
                        ans = temp;
                    }
                }
            }
        }

        return ans;
    }
};
