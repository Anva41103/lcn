class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        unordered_set<long long> m(nums.begin(), nums.end());
        int ma = 0;
        for (auto it : nums) {
            long long x = it;
            int k = 0;
            while (m.count(x) > 0) {
                k++;
                x=x*x;
            }
            ma=max(ma,k);
        }

        return (ma > 1) ? ma:-1;
    }
};