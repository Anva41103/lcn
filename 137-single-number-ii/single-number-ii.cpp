class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int m=1;
        int ans=0;
        for(int i=0;i<32;i++)
        {
            int c=0;
            for(auto it:nums) {
                if(m&it) c++;
            }
            ans+=((c%3)*m);
            m<<=1;
        }
        return ans;
    }
};