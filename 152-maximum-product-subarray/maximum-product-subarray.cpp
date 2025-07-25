class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prod=1,ans=0;
        for(auto it:nums)
        {
            prod*=it;
            ans=max(prod,ans);
            if(prod==0) prod=1;
        }
        prod=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            prod*=nums[i];
            ans=max(prod,ans);
            if(prod==0) prod=1;
        }
        if(nums.size()==1&&nums[0]<0) return nums[0];
        return ans;
    }
};