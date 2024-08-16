class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int mi= arrays[0][0];
        int ma=arrays[0].back();
        int ans=0;
        for (int i = 1; i < arrays.size(); ++i) 
        {
            auto it= arrays[i];
            ans= max(ans, ma-it[0]);
            ans=max(ans, it.back()-mi);
            mi= min(mi, it[0]);
            ma= max(ma,it.back());
        }
        return ans;
    }
};