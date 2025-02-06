class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        map <int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                mp[nums[i]*nums[j]]++;
            }
        }
        int ans=0;
        for(auto it:mp)
        {
            int k=(it.second*(it.second-1))/2;
            ans+=k*8;
        }
        return ans;
    }
};