class Solution {
public:
    int helper(vector <int> &nums, vector <int> &dp, int ind)
    {
        
        if(ind==0) return nums[ind];
        if(ind<0) return 0;
        if(dp[ind]!=-1) return dp[ind];
        int pick=nums[ind]+helper(nums,dp, ind-2);
        int notpick=helper(nums,dp,ind-1);
        return dp[ind]=max(pick,notpick);
    }
    int rob(vector<int>& nums) {
        int n= nums.size();
        vector <int> dp(n,-1);
        return helper(nums,dp,n-1);
    }
};