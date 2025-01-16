class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) 
    {
        int n= nums1.size(), m= nums2.size();
        int ans=0;
        for(auto it:nums1)
        {
            if(!(m&1)) break;
            else ans^=it;
        }
        for(auto it:nums2)
        {
            if(!(n&1)) break;
            else ans^=it;
        }
        return ans;
    }
};