class Solution {
public:
    void helper(vector <vector <int>> &q, int ind, vector <long long> &dp, long long &m)
    {
        if(ind<0) return;
        int next=ind+1+q[ind][1];
        if(next<q.size())
        {
            dp[ind]=dp[next]+q[ind][0];
        }
        else dp[ind]=q[ind][0];
        if(ind<q.size()-1) dp[ind]=max(dp[ind],dp[ind+1]);
        helper(q,ind-1,dp,m);
    }
    long long mostPoints(vector<vector<int>>& q) {
        long long n= q.size();
        vector <long long> dp(n,-1);
        long long m=0;
        helper(q,n-1,dp, m); 
        return dp[0];
    }
};