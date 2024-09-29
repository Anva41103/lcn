class Solution {
public:
int sum(int s)
{
    int ans=0;
    while(s)
    {
        ans+=s%10;
        s/=10;
    }
    return ans;
}
    int minElement(vector<int>& nums) {
        int m= INT_MAX;
        for(auto it: nums)
        {
            m=min(m,sum(it));
        }
        return m;
    }
};