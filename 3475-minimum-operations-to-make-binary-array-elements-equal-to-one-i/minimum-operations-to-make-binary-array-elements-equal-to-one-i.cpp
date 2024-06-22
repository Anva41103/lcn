class Solution {
public:
    int minOperations(vector<int>& nums) {
        int p=0,i;
        for(i=0;i<nums.size()-2;i++)
        {
            if(!(nums[i]))
            {
                p++;
                nums[i]=!nums[i];
                nums[i+1]=!nums[i+1];
                nums[i+2]=!nums[i+2];
            }
        }
        while(i<nums.size()) 
        {
            if(nums[i++]==0) return -1;
        }
        return p;
    }
};