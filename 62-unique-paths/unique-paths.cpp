class Solution {
public:
    int helper(vector<vector<int>> &dp, int i,int j)
    {
        if(i<0||j<0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(i==0||j==0) return 1;
        int left=helper(dp,i-1,j);
        int up=helper(dp,i,j-1);
        return dp[i][j]=left+up;
    }
    int uniquePaths(int m, int n) {
        vector <vector <int>> dp(m, vector <int>(n,-1));
        return helper(dp,m-1,n-1);
    }
};