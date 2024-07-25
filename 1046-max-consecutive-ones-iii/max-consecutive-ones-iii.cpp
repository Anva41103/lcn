class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,r=0, last =0,p=0, m=0;
        while(r<nums.size())
        {
        if(nums[r]==0)p++;
           while(p>k)
           {
            if(nums[l]==0)
            {
                p--;
            }
            l++;
           }
           
           m= max(m, r-l+1);
           
           r++;
        }
        return m;
    }
};