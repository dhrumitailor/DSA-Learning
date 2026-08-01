class Solution {
public:

vector<string> keypad={  "","", "abc" , "def" , "ghi" , "jkl" , "mno" , "pqrs" , "tuv" , "wxyz"};

void solve(int index , string digits , string temp,vector<string>&ans){
if(index == digits.size()){
   if(!temp.empty()){
    ans.push_back(temp);
   }
   return;
}
string letters = keypad[digits[index]-'0'];
for(char ch:letters){
    solve(index+1 ,digits, temp+ch , ans);
}

}
    vector<string> letterCombinations(string digits) {
          vector<string> ans;
          solve(0 , digits , "", ans);
          return ans;
    }
};