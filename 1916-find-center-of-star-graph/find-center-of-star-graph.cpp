class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map <int,int> m;
        for(auto it:edges)
        {
           m[it[0]]++;
           m[it[1]]++;
        }
        for(auto it:m) { if(it.second>1) return it.first;}
        return 0;
    }
};