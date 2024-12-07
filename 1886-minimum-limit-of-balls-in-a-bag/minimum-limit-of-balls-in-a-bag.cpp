class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        int m=*max_element(nums.begin(),nums.end());
        int p=1;
        int ans=m;
        while(p<=m)
        {
            int nop=0;
            int mid=(m+p)/2;
            for(auto it:nums)
            {
                nop+=(it-1)/mid;
                if(nop>maxOperations) break;
            }
            if(nop<=maxOperations)
            {
                ans=mid;
                m=mid-1;
            }
            else p=mid+1;
        }
        return ans;
    }
    
};