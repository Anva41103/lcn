class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int m= *max_element(nums.begin(),nums.end());
        int x=0,p=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==m) x++;
            else x=0;
            p=max(x,p);
        }
        return p;
    }
};