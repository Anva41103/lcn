class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue <int> pq;
        for(auto it: nums)
        {
            pq.push(it);
        }
        long long ans=0;
        while(k--)
        {
            ans+=pq.top();
            int l=ceil((double)pq.top()/3);
            pq.pop();
            pq.push(l);
        }
        return ans;
    }
};