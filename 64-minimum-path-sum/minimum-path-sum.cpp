class Solution {
public:
    int uniquePath(vector<vector<int>>&grid, vector<vector<int>>& dp, int x,
                   int y) {

        if (x == 0 && y == 0)
            return grid[x][y];
        if (x < 0 || y < 0)
            return 1e9;
        if (dp[x][y] != -1)
            return dp[x][y];
        int left = uniquePath(grid, dp, x, y - 1);
        int right = uniquePath(grid, dp, x - 1, y);
        return dp[x][y] =  grid[x][y] +min(left, right);
    }

    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return uniquePath(grid, dp, n - 1, m - 1);
    }
};