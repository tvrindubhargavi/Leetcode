class Solution {
public:
bool isValid(int i, int j, vector<string>&board,int n){
for(int row=0; row<i;row++){
    if(board[row][j]=='Q') return false;
}
  int row = i - 1;
        int col = j - 1;
        while(row >= 0 && col >= 0) {
            if(board[row][col] == 'Q')
                return false;  
            row--;
            col--;
        }
        row = i - 1;
        col = j + 1;
        while(row >= 0 && col < n) {
            if(board[row][col] == 'Q')
                return false;
            row--;
            col++;
        }
        return true;
}
void solve(int row, vector<string>&board,vector<vector<string>>&boards,int n){
    if(row>=n){
        boards.push_back(board);
        return;
    }
    for(int col=0;col<n;col++){
        if(isValid(row,col,board,n)){
            board[row][col]='Q';
            solve(row + 1, board, boards, n);
             board[row][col] = '.';
        }
    }
}
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> boards;
        vector<string> board(n, string(n, '.'));
        solve(0, board, boards, n);
        return boards;
    }
};