class Solution {
public:
    bool searchFromPosition(vector<vector<char>>& board, string word, int i, int j, int index) {
    if (index == word.length()) {
        return true;
    }
    
    if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != word[index]) {
        return false;
    }
    
    // To avoid revisiting the same cell, temporarily mark the cell as visited
    char temp = board[i][j];
    board[i][j] = '#';

    // Check in all four directions
    bool found = searchFromPosition(board, word, i + 1, j, index + 1) ||
                 searchFromPosition(board, word, i - 1, j, index + 1) ||
                 searchFromPosition(board, word, i, j + 1, index + 1) ||
                 searchFromPosition(board, word, i, j - 1, index + 1);

    // Restore the cell value
    board[i][j] = temp;

    return found;
}

bool exist(vector<vector<char>>& board, string word) {
    int row = board.size();
    int col = board[0].size();

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (searchFromPosition(board, word, i, j, 0)) {
                return true;
            }
        }
    }

    return false;
}
};