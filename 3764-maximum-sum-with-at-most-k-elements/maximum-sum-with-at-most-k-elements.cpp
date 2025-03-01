class Solution {
public:
    long long maxSum(vector<vector<int>>& grid, vector<int>& limits, int k) {
        priority_queue <int,vector <int>, greater <int>> pq;
        for(int i=0;i<grid.size();i++)
        {
            sort(grid[i].begin(),grid[i].end(), greater<int> ());
            for(int j=0;j<limits[i];j++)
            {
                pq.push(grid[i][j]);
            }
            while(pq.size()>k) pq.pop();
        }
        long long ans=0;
        while(!pq.empty())
        {
            ans+=pq.top();
            pq.pop();
        }
        return ans;
    }
};