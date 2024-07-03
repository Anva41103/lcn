class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n= nums.size();
        vector <int> ls(n), rs(n);
        long long s=0,i=0;
        for(auto it:nums)
        {
            s+=it;
            ls[i++]=s;
        }
        // for(int j=n-1;j>=0;j--)
        // {
        //     s+=nums[j];
        //     rs[j]=s;
        // }
        int c=0;
        long long k=0;
        for(int i=0;i<n-1;i++)
        {
            k+=nums[i];
            s-=nums[i];
            if(k>=s) c++;
        }
        return c;
    }
};