class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int a=1,b=1, m=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]<nums[i]) 
            {
                a++;
                m= max(m,a);
            }
            else a=1;
            if(nums[i-1]>nums[i])
            {
                b++;
                m= max(m,b);
            }
            else b=1;
        }
        return m;
    }
};