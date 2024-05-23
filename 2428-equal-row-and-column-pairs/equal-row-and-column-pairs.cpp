class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
      map<vector<int>, int> rowMap;
        int n= grid.size();
        for (int i = 0; i < n; ++i) {
            rowMap[grid[i]]++;
        }

        int count = 0;
        
        // Check each column against the stored rows in the map
        for (int j = 0; j < n; ++j) {
            vector<int> col;
            for (int i = 0; i < n; ++i) {
                col.push_back(grid[i][j]);
            }
            // Increment count by the number of times this column appears as a row
            if (rowMap.find(col) != rowMap.end()) {
                count += rowMap[col];
            }
        }

        return count;
    }
};