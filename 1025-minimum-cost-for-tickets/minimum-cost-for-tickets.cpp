class Solution {
public:
    int helper(vector<int>& dp, vector<int>& c, vector<int>& d, int ind) {
        if (ind < 0) return 0; 
        if (dp[ind] != -1) return dp[ind];
        int cost1 = c[0] + helper(dp, c, d, ind - 1);
        int i = ind;
        while (i >= 0 && d[i] > d[ind] - 7) i--;
        int cost7 = c[1] + helper(dp, c, d, i);
        i = ind;
        while (i >= 0 && d[i] > d[ind] - 30) i--;
        int cost30 = c[2] + helper(dp, c, d, i);
        dp[ind] = min({cost1, cost7, cost30});
        return dp[ind];
    }

    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n = days.size();
        vector<int> dp(n, -1);
        return helper(dp, costs, days, n - 1);
    }
};
