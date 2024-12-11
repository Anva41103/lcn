class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int l=0,r=0;
        int cur=0,m=0;
        while(r<nums.size())
        {
            while(r<nums.size()&&(nums[r]-nums[l])<=2*k) { r++; cur++;}
            m=max(m,cur);
            if(r==nums.size()) break;
            while(l<=r&&(nums[r]-nums[l])>2*k) {l++,cur--;}
        }
        return m;
    }
};