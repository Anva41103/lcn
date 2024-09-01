class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector <vector <int>> ans(m, vector <int>(n));
        int l=0;
        for(int i=0;i<m;i++)
        {
            if(l>=original.size() ) return {};
            for(int j=0;j<n;j++)
            {
                if(l>=original.size() ) return {};
                ans[i][j]=original[l++];
            }
        }
        if(l!=original.size()) return {};
        return ans; 
    }
};