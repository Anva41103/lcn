class Solution {
public:
    int helper(vector<vector <int>> &dp, vector <int> coins, int ind,int am)
    {
        if(ind==0)
        {
            if(am%coins[ind]==0) return am/coins[ind];
            else return 1e7;
        }
        if(dp[ind][am]!=-1) return dp[ind][am];
        int nottaken=helper(dp,coins,ind-1,am);
        int taken=1e7;
        if(coins[ind]<=am) taken=1+helper(dp,coins,ind,am-coins[ind]);
        return dp[ind][am]=min(taken,nottaken);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n= coins.size();
        vector <vector <int>> dp(n,vector <int>(amount+1,-1));
        int k=helper(dp,coins,n-1,amount);
        if(k>=1e7) return -1;
        else return k;
    }
};