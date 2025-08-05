class Solution {
public:
    bool dfs(int c, vector <vector <int>> &graph, vector <int> &col, int node)
    {
        col[node]=c;
        for(auto it:graph[node])
        { 
            if(col[it]==-1)
            {if(dfs(!c,graph, col,it)==false) return false;}
            else if(col[it]==c) return false;
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector <int> col(n,-1);
        for(int i=0;i<n;i++)
        {
            if(col[i]==-1) 
            if(!dfs(0,graph,col,i)) return false;
        }
        return true;
    }
};