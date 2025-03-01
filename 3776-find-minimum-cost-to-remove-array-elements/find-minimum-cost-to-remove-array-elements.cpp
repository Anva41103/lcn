class Solution {
public:
int helper(int ext, int ind, vector <int>& nums, vector <vector <int>> &dp)
{
    if(ind==nums.size()) return nums[ext];
    if(ind==nums.size()-1) return max(nums[ext],nums[ind]);
    if(dp[ind][ext]!=-1) return dp[ind][ext];
    int a=max(nums[ind],nums[ext])+helper(ind+1,ind+2, nums,dp);
    int b=max(nums[ind],nums[ind+1])+helper(ext,ind+2, nums,dp);
    int c=max(nums[ind+1],nums[ext])+helper(ind,ind+2, nums,dp);
    return dp[ind][ext]=min({a,b,c});
}
    int minCost(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
        return helper(0, 1, nums, dp);
    }
};