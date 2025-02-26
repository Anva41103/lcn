class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int pk=0,nk=0,sn=0,sp=0;
        for(int i=0;i<nums.size();i++)
        {
            sp+=nums[i];
            sn+=nums[i];
            if(sp<0) sp=0;
            if(sn>0) sn=0;
            pk=max(pk,sp);
            nk=min(nk,sn);
        }
    nk=abs(nk);
    return max(nk,pk);
    }
};