class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int s=0;
        int sa=0;
        unordered_map <int,int> m;
        m[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]&1) s++;
            sa+=m[s-k];
            m[s]++;
        }
        return sa;
    }
};