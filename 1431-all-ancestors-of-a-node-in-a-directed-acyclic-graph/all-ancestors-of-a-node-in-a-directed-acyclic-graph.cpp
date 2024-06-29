class Solution {
public:
    void dfs(vector <int> &vis, vector <int> &a, vector <int> adj[], int n)
    {
        vis[n]=1;
        a.push_back(n);
        for(auto it:adj[n])
        {
            if(!vis[it]) dfs(vis,a,adj,it);
        }
    }
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        vector <int> adj[n];
        for(auto it: edges)
        {
            adj[it[1]].push_back(it[0]);
        }
        vector <vector <int>> v;
        for(int i=0;i<n;i++)
        {
            vector <int> a;
            vector <int> vis(n,0);
            vis[i]=1;
            for(auto it: adj[i])
            {
                if(!vis[it])
                {
                    dfs(vis,a,adj,it);
                }
            }
            sort(a.begin(),a.end());
            v.push_back(a);
        }
        return v;
    }
};