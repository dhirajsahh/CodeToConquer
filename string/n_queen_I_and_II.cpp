/*https://leetcode.com/problems/n-queens-ii/description/
https://leetcode.com/problems/n-queens/description/
both same 
in one we have to find path and 
in another we have to find that board specifications
*/
class Solution {
public:
    
    int count=0;
    int N;
    int totalNQueens(int n) {
        vector<vector<char>>board(n,vector<char>(n,'.'));
        N=n;
        solve(board,0);
        return count;        
    }
    void solve(vector<vector<char>>&board,int row){
        
        if(row>=N){
            count++;
            return ;
        }

        for(int col=0;col<N;col++){
            if(isValid(board,row,col)){
                board[row][col]='Q';
                solve(board,row+1);
                board[row][col]='.';
            }
        }
    }
    bool isValid(vector<vector<char>>&board,int row,int col){
        //upside check
        for(int i=row;i>=0;i--){
            if(board[i][col]=='Q'){
                return false;
            }
        }
        //upside diagonal check
        for(int i=row,j=col;i>=0&&j<N;i--,j++){
            if(board[i][j]=='Q'){
                return false;
            }
        }
        for(int i=row,j=col;i>=0&&j>=0;i--,j--){
            if(board[i][j]=='Q'){
                return false;
            }
        }
        return true;
    }
};
class Solution {
public:
    vector<vector<string>>result;
    int N;
    vector<vector<string>> solveNQueens(int n) {
        vector<string>board(n,string(n,'.'));
        N=n;
        int row=0;
        solve(board,0);
        return result;
    }
    void solve(vector<string>&board,int row){
        if(row>=N){
            result.push_back(board);
            return;
        }
        for(int col=0;col<N;col++){
            if(isValid(board,row,col)){
            board[row][col]='Q';
            solve(board,row+1);
            board[row][col]='.';
            }
        }
    }
    bool isValid(vector<string>&board,int row,int col){
        //up check
        for(int i=row;i>=0;i--){
            if(board[i][col]=='Q'){
                return false;
            }
        }
        //upside diagonal check
        for(int i=row,j=col;i>=0&&j<N;i--,j++){
            if(board[i][j]=='Q'){
                return false;
            }
        }
        for(int i=row,j=col;i>=0&&j>=0;i--,j--){
            if(board[i][j]=='Q'){
                return false;
            }
        }
        return true;
    }

};