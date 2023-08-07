class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int N = 9;

        // Check each row
        for (int i = 0; i < N; i++) {
            vector<bool> vis(N, false);
            for (int j = 0; j < N; j++) {
                if (board[i][j] != '.' && vis[board[i][j] - '1']) {
                    return false;
                }
                if (board[i][j] != '.') {
                    vis[board[i][j] - '1'] = true;
                }
            }
        }

        // Check each column
        for (int j = 0; j < N; j++) {
            vector<bool> vis(N, false);
            for (int i = 0; i < N; i++) {
                if (board[i][j] != '.' && vis[board[i][j] - '1']) {
                    return false;
                }
                if (board[i][j] != '.') {
                    vis[board[i][j] - '1'] = true;
                }
            }
        }

        // check each subgrid
        for(int r = 0; r < 9; r = r + 3){
            for(int c = 0; c < 9; c = c + 3){
                vector<bool> vis(N, false);
                for(int i = r; i < r + 3; i++){
                    for(int j = c; j < c + 3; j++){
                        if (board[i][j] != '.' && vis[board[i][j] - '1']) {
                            return false;
                        }
                        if (board[i][j] != '.') {
                            vis[board[i][j] - '1'] = true;
                        }  
                    }
                }
            }
        }

        return true;
    }
};