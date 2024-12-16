class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int m) {
        vector <int> ans(nums.size());
        priority_queue <pair <int,int>, vector <pair<int,int>>, greater <pair <int,int>>> pq;
        for(int i=0;i<nums.size();i++)
        {
            pq.push({nums[i],i});
        }
        while(k--)
        {
            auto it=pq.top();
            pq.pop();
            it.first*=m;
            pq.push(it);
        }
        while(!pq.empty())
        {
            auto it=pq.top();
            pq.pop();
            ans[it.second]=it.first;
        }
        return ans;
    }
};