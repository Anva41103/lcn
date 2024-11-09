#define ll long long
class Solution {
public:
    int d[5]={1,0,-1,0,1};
    int minTimeToReach(vector<vector<int>>& mt) {
        int n=mt.size();
        int m= mt[0].size();
        priority_queue <pair<ll,pair<ll,ll>>, vector <pair<ll,pair<ll,ll>>>, greater<pair<ll,pair<ll,ll>>>>pq;
        vector <vector<ll>> dist(n,vector <ll>(m,INT_MAX));
        pq.push({0,{0,0}});
        dist[0][0]=0;
        while(!pq.empty())
        {
            ll t=pq.top().first;
            int r=pq.top().second.first;
            int c=pq.top().second.second;
            pq.pop();
            if(r==n-1&&c==m-1) return t;
            for(int i=0;i<4;i++)
            {
                int dr=r+d[i];
                int dc=c+d[i+1];
                if(dr>=0&&dc>=0&&dr<n&&dc<m)
                {
                    ll mat=max(t+1,1ll*mt[dr][dc]+1);
                    if(dist[dr][dc]>mat)
                    {
                        dist[dr][dc]=mat;
                        pq.push({mat,{dr,dc}});
                    }
                }
            }
        }
        return -1;
    }
};