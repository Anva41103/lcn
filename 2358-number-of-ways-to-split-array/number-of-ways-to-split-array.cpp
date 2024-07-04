class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n= nums.size();
        vector <long long> ls(n), rs(n);
        long long s=0,i=0;
        for(auto it:nums)
        {
            s+=it;
            ls[i++]=s;
        }
        s=0;
        for(int j=n-1;j>=0;j--)
        {
            s+=nums[j];
            rs[j]=s;
        }
        int c=0;
        for(int i=0;i<n-1;i++)
        {
            if(ls[i]>=rs[i+1]) c++;
        }
        return c;
    }
};