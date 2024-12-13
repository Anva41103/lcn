class Solution {
public:
    long long findScore(vector<int>& nums) {
        int n = nums.size();
        vector<std::pair<int, int>> dp(n);
        for (int i = 0; i < n; i++) {
            dp[i] = {nums[i], i};
        }
        sort(dp.begin(), dp.end());
        std::vector<bool> marked(n, false);
        long long result = 0;
        for (const auto& arr : dp) {
            int val = arr.first;
            int ind = arr.second;

            if (!marked[ind]) {
                result += val;
                marked[ind] = true;
                if (ind > 0) 
                    marked[ind - 1] = true;
                if (ind < n - 1) 
                    marked[ind + 1] = true;
            }
        }
        return result;
    }
};