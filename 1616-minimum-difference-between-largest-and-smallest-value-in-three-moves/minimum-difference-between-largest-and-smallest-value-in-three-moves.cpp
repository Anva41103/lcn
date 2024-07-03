class Solution {
public:
    int minDifference(vector<int>& nums) {
        if(nums.size()<=4) return 0;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int k=1e9;
        k=nums[n-1]-nums[3];
        k= min(k,nums[n-3]-nums[1]);
        k=min(k,nums[n-2]-nums[2]);
        return min(k,nums[nums.size()-4]-nums[0]);
    }
};