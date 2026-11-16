
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // row check
        for (int i = 0; i < 9; i++) {
            set<char> seen;

            for (char c : board[i]) {
                if (c == '.') continue;

                if (seen.contains(c)) return false;
                seen.insert(c);
            }
        }

        // column check
        for (int j = 0; j < 9; j++) {
            set<char> seen;

            for (int i = 0; i < 9; i++) {
                char c = board[i][j];

                if (c == '.') continue;

                if (seen.contains(c)) return false;
                seen.insert(c);
            }
        }

        // 3x3 square check
        for (int boxRow = 0; boxRow < 3; boxRow++) {
            for (int boxCol = 0; boxCol < 3; boxCol++) {
                set<char> seen;

                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        char c = board[boxRow * 3 + i][boxCol * 3 + j];

                        if (c == '.') continue;

                        if (seen.contains(c)) return false;
                        seen.insert(c);
                    }
                }
            }
        }

        return true;
    }
};
