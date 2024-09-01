class Solution {
public:
    vector<int> resultsArray(vector<vector<int>>& queries, int k) {
        priority_queue <int, vector <int>> pq;
        vector <int> ans;
        for(auto it: queries)
        {
            int d= abs(it[0])+abs(it[1]);
            pq.push(d);
            while(pq.size()>k) pq.pop();
            if(pq.size()<k) { ans.push_back(-1);}
            else ans.push_back(pq.top());
        }
        return ans;
    }
};