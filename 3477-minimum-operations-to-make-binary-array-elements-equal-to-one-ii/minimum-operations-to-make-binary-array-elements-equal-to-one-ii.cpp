class Solution {
public:
    int minOperations(vector<int>& nums) {
        int p=1, t=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=p)
            {
                t+=1;
                p=!p;
            }
        }
        return t;
    }
};