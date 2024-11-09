class Solution {
public:
    int helper(int x)
    {
        int p=1;
        while(x)
        {
            int it=x%10;
            p*=it;
            x/=10;
        }
        return p;
    }
    int smallestNumber(int n, int t) {
        for(int i=n;i<n+10;i++)
        {
            if(helper(i)%t==0) return i;
        }
        return 0;
    }
};