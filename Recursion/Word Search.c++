class Solution {
public:

bool solve(int index ,vector<vector<char>>& board, string& word, int i , int j ){
if(index == word.length()){
    return true;
}

if(i<0 || j<0 || i>=board.size() || j>=board[0].size() ||board[i][j] != word[index]){
    return false;
}
char ch = board[i][j];
board[i][j] = '#';

bool found = solve(index+1 , board , word , i+1 , j)||
                 solve(index+1 , board , word , i-1 , j)||    
                 solve(index+1 , board , word , i , j+1)||
                  solve(index+1 , board , word , i , j-1);
board[i][j] = ch;

return found;
}


    bool exist(vector<vector<char>>& board, string word) {

        for(int i = 0 ; i <board.size() ; i++){
            for(int j =0 ; j < board[0].size(); j++){

            if(solve(0 , board , word , i , j)){
                return true;
            }
            }
        }

        return false;
    }
};