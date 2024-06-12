class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& b) {
        for (int i = 0; i < 9; i++) {
            unordered_map<char, int> rowMap;
            unordered_map<char, int> colMap;
            for (int j = 0; j < 9; j++) {
                if (b[i][j] != '.') {
                    rowMap[b[i][j]]++;
                    if (rowMap[b[i][j]] > 1) return false;
                }
                if (b[j][i] != '.') {
                    colMap[b[j][i]]++;
                    if (colMap[b[j][i]] > 1) return false;
                }
            }
        }
        for (int block = 0; block < 9; block++) {
            unordered_map<char, int> boxMap;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    int row = 3 * (block / 3) + i;
                    int col = 3 * (block % 3) + j;
                    if (b[row][col] != '.') {
                        boxMap[b[row][col]]++;
                        if (boxMap[b[row][col]] > 1) return false;
                    }
                }
            }
        }
        return true;
    }
};