class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int ans=0,n=nums.size();
        if(n==1) 
        {
            if(nums[0]%k==0) return 1;
            else return 0;
        }
        unordered_map <int,int> m;
        m[0]=1;
        int s=0; 
        for(int i=0;i<n;i++)
        {
            s+=nums[i];
            int l=s%k;
            if(l<0) l+=k;
            if(m.find(l)!=m.end()) ans+=m[l];
            m[l]++;
        }
        return ans;
    }
};