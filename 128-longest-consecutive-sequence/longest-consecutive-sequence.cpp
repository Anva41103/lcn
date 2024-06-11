class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        int c=1,m=1;
        for(auto it: nums) cout<<it;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==(nums[i-1]+1)) c++;
            else if(nums[i]==nums[i-1]) continue;
            else
            {
                m=max(m,c);
                c=1;
            }
        }
        m=max(m,c);
        return m;
    }
};