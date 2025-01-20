class Solution {
public:
    int subarraySum(vector<int>& nums) {
        vector <int> pre;
        int sum=0;
        for(auto it:nums)
        {
            sum+=it;
            pre.push_back(sum);
        }
         int r=0;
        for(int i=0;i<nums.size();i++)
        {
            int s=max(0,i-nums[i]);
           
            if(s>0) r-=pre[s-1];
            r+=pre[i];
        }
        return r;
    }
};