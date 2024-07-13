class Solution {
public:
    int minpathsum(vector<vector<int>>& triangle, vector<vector<int>>& dp, int x, int y) {
        if (x < 0 || y < 0 || y > x) return INT_MAX; // Ensure y does not exceed x and handles invalid paths
        if (x == 0 && y == 0) return triangle[0][0]; // Base case: top element of the triangle
        if (dp[x][y] != -1) return dp[x][y];
        
        int up = minpathsum(triangle, dp, x - 1, y);
        int upleft = minpathsum(triangle, dp, x - 1, y - 1);
        
        if (up == INT_MAX && upleft == INT_MAX) return dp[x][y] = INT_MAX; // If both paths are invalid
        if (up == INT_MAX) return dp[x][y] = triangle[x][y] + upleft;
        if (upleft == INT_MAX) return dp[x][y] = triangle[x][y] + up;
        
        return dp[x][y] = triangle[x][y] + min(up, upleft);
    }

    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        int s = INT_MAX;
        for (int i = 0; i < n; i++) {
            s = min(s, minpathsum(triangle, dp, n - 1, i)); // Correct function call and parameters
        }
        return s;
    }
};
