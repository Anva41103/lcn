class Solution {
public:
    long long gridGame(vector<vector<int>>& g) {
        long long top = accumulate(g[0].begin(), g[0].end(), 0LL), bottom = 0;
        long long res = LLONG_MAX;

        for (int i = 0; i < g[0].size(); ++i) {
            top -= g[0][i];
            res = min(res, max(top, bottom));
            bottom += g[1][i];
        }

        return res;
    }
};
