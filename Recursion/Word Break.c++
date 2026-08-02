class Solution {
public:
bool solve(int index , string&s, unordered_set<string> &st){


    if(index == s.size()){
        return true;
    }
string word = "";

    for(int i = index ; i <s.size() ; i++){
        word += s[i];
        if(st.count(word)){
            if(solve(i+1 , s ,st)){
                return true;
            }
        }
    }
    return false;
}


    bool wordBreak(string s, vector<string>& wordDict) {
        // Your code goes here
        unordered_set<string>st (wordDict.begin(), wordDict.end());
       return solve(0 , s ,st);

    }
};