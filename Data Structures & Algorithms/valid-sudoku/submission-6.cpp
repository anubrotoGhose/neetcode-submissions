class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(int i=0;i<9;i++) {
            unordered_set<char> row;
            unordered_set<char> col;
            for(int j=0;j<9;j++) {
                if(row.count(board[i][j]) == 1 && board[i][j]!='.') {
                    return false;
                } else {
                    row.insert(board[i][j]);
                }

                if(col.count(board[j][i]) == 1 && board[j][i]!='.') {
                    return false;
                } else {
                    col.insert(board[j][i]);
                }
            }
        }

        

        for(int boxRow = 0; boxRow < 9; boxRow+=3) {
            for(int boxCol = 0; boxCol < 9; boxCol+=3) {
                unordered_set<char> box;
                for(int i=0;i<3;i++) {
                    for(int j=0;j<3;j++) {
                        char current = board[boxRow + i][boxCol + j];
                        if(current != '.') {
                            if(box.count(current) == 1) {
                                return false;
                            } else {
                                box.insert(current);
                            }
                        }
                    }
                }
            }
        }

        return true;
    }
};
