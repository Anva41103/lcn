#define ll long long
class Solution {
public:
    long long findMaximumScore(vector<int>& nums) {
        int p = 0;
        ll ans = 0;
        for(int i=1;i<(int)(nums.size());++i){
            if(nums[i]>=nums[p]){
                ans+=1LL*(i-p)*nums[p];
                p = i;
            }
            else if(i==(int)(nums.size()-1)){
                ans+=1LL*((int)(nums.size())-1-p)*nums[p];
            }
        }
        return ans;
    }
};