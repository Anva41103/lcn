class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0, ans=INT_MIN;
        for(auto it: nums)
        {
            sum+=it;
            ans=max(ans,sum);
            sum=max(sum,0);
        }
        return ans;


    }
};