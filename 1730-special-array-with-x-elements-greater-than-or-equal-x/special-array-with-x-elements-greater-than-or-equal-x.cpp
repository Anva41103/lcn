class Solution {
public:
    int specialArray(vector<int>& nums) {
        int s= nums.size();
        sort(nums.begin(),nums.end());
        int c=0;
        if(s<=nums[0]) return s;
        for(int i=0;i<s;i++)
        {
            if(nums[s-i-1]<i&&nums[s-i]>=i) return i;
        }
        return -1;
    }
};