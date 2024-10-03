class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        long long sum= accumulate(nums.begin(),nums.end(),0LL);
        int rem= sum%p;
        unordered_map<long long, int> m;
        if(rem==0) return 0;
        int mi=nums.size();
        long long k=0;
        m[0]=-1;
        for(int i=0;i<nums.size();i++)
        {
            k=(nums[i]+k)%p;
            long long t=(k-rem+p)%p;
            if(m.find(t)!=m.end())
            {
                mi= min(mi,i-m[t]);
            }
            m[k]=i;
        }
        return (mi==nums.size())?-1:mi;
    }
};