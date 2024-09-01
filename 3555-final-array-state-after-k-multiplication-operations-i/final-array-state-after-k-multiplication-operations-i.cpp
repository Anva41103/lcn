class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int m) {
        int l=0;
        while(k--)
        {
            l=0;
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]<nums[l])l=i;
            }
            nums[l]*=m;
        }
        return nums;
    }
};