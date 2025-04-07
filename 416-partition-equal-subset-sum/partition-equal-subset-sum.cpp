class Solution {
public:
    bool subsetsum(vector<int>& nums, vector<vector<int>>& dp, int target,
                   int ind) {
        if(target == 0) return true;
        if(ind == 0) return nums[ind] == target;
        if(dp[ind][target] != -1) return dp[ind][target];
        bool pick = false, notPick = false;
        notPick = subsetsum(nums, dp, target, ind - 1);
        if (nums[ind] <= target)
            pick = subsetsum(nums, dp, target - nums[ind], ind - 1);
        return dp[ind][target] = pick || notPick;
    }

    bool canPartition(vector<int>& nums) {
        int  b = accumulate(nums.begin(), nums.end(), 0);
        if(b%2!=0) return false;
        b/=2;
        vector <vector <int>> dp(nums.size(),vector <int>(b+1,-1));
        return subsetsum(nums, dp, b, nums.size()-1);
    }
};