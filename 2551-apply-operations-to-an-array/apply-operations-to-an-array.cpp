class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        vector <int> v;
        int z=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0) z++;
            else if((i+1)<nums.size()&&nums[i]==nums[i+1])
            {
                v.push_back(nums[i]*2);
                z++;
                i++;
            }
            else v.push_back(nums[i]);
        }
        while(z--)
        {
            v.push_back(0);
        }
        return v;
    }
};