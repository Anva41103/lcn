class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int t=0, p=0;
        for(auto it: nums)
        {
            if(it>0)t++;
            else if(it<0) p++;
        }
        return max(t,p);
    }
};