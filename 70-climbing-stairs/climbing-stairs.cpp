class Solution {
public:
    int count(int n, vector<int> &dp) {
        if (n == 1) return dp[n] = 1;
        if (n == 2) return dp[n] = 2;
        if (dp[n] != 0) return dp[n];  
        dp[n] = count(n - 1, dp) + count(n - 2, dp);
        return dp[n];
    }

    int climbStairs(int n) {
        vector<int> dp(n + 1, 0);
        return count(n, dp);
    }
};
