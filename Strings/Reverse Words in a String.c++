class Solution {
public:
    string reverseWords(string s) {

        vector<string> words;
        int i = 0;
        int n = s.size();

        while (i < n) {

            // Skip spaces
            while (i < n && s[i] == ' ')
                i++;

            string word = "";

            // Collect one word
            while (i < n && s[i] != ' ') {
                word += s[i];
                i++;
            }

            if (!word.empty())
                words.push_back(word);
        }

        string ans = "";

        for (int i = words.size() - 1; i >= 0; i--) {
            ans += words[i];

            if (i != 0)
                ans += " ";
        }

        return ans;
    }
};