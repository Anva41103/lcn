class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int i=0,j=nums.size()-1,s1=0,s2=0;
        for(auto it:nums) s2+=it;
        for(int i=0;i<nums.size();i++)
        {
            s2 -= nums[i]; // s2 is now the sum of elements to the right of index i
            if (s1 == s2) return i; // Check if left sum equals right sum
            s1 += nums[i];
        }
        return -1;
    }
};