class Solution {
public:
    int maxScore(vector<int>& nums) {
        long long s=0;
        int i;
        sort(nums.begin(),nums.end(), greater <int>());
        for( i=0;i<nums.size();i++)
        {
            s+=nums[i];
            if(s<=0) return i;
        }
        return i;
    }
};