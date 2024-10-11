class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        int n= times.size();
        vector <pair <int,int>> arr;
        for(int i=0;i<n;i++) arr.push_back({times[i][0],i});
        sort(arr.begin(),arr.end());
        priority_queue <int, vector <int>, greater <int>> av;
        for(int i=0;i<n;i++)
        {
            av.push(i);
        }
        priority_queue <pair<int,int>, vector <pair<int,int>>, greater<pair<int,int>>> lq;
        for(auto it: arr)
        {
            int at=it.first;
            int fi=it.second;
            while(!lq.empty()&&lq.top().first<=at)
            {
                av.push(lq.top().second);
                lq.pop();
            }
            int c=av.top();
            av.pop();
            if(fi==targetFriend) return c;
            lq.push({times[fi][1],c});
        }
        return -1;

    }
};