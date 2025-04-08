class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n=nums.size();
        map <int,int> mp;
        int j,f=-1;
        for(j=n-1;j>=0;j--)
        {
            if(mp[nums[j]]>0) {f=j; break;}
            mp[nums[j]]++;
        }
        if(f==-1) return 0;
        else 
        {
            int ans=(f+1)/3;
            if((f+1)%3>0) ans++;
            return ans;
        }
        return 0;
    }
};