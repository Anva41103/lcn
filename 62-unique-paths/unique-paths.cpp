class Solution {
public:
    int uniquePath( vector <vector <int>>& dp, int x, int y)
{
if(x==0&&y==0) return 1;
if(x<0||y<0) return 0;
if(dp[x][y]!=-1) return dp[x][y];
int left=uniquePath(dp,x, y-1);
int right=uniquePath(dp,x-1, y);
return dp[x][y]=left+right;
}

    int uniquePaths(int n, int m) {
        vector <vector <int>> dp(n, vector <int>(m,-1));
        return uniquePath(dp, n-1,m-1);
    }
};