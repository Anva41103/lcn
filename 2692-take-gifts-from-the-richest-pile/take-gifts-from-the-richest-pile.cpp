class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long ans=0;
        priority_queue <long long> pq;
        for(auto it:gifts) { pq.push(it); ans+=it;}
        while(k--)
        {
            long long p=pq.top();
            pq.pop();
            ans-=p;
            p=floor(sqrt(p));
            ans+=p;
            pq.push(p);
        }
        return ans;
    }
};