class Solution {
public:
    int p(int n)
    {
        int s=0;
        while(n)
        {
            s+=n%10;
            n/=10;
        }
        return s;
    }
    int maximumSum(vector<int>& nums) {
        map <int, priority_queue <int,vector <int>, greater <int>>> mp;
        for(auto it:nums)
        {
            int k=p(it);
            mp[k].push(it);
            if((mp[k]).size()>2) mp[k].pop();
        }
        int ans=-1;
        for(auto it:mp)
        {
            if(it.second.size()>1) { int o=it.second.top(); it.second.pop(); ans=max(ans,it.second.top()+o);}
        }
        return ans;
    }
};