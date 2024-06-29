class Solution {
public:
    bool isprime(int n)
    {
        if(n==1) return false;
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0) return false;
        }
        return true;
    }
    vector<int> closestPrimes(int l, int r) {
        vector <int> v={-1,-1};
        int a=-1, b=-1;
        for(int i=l;i<=r;i++)
        {
            if(isprime(i))
            {
                if(a==-1) a=i;
                else if(b==-1) b=i;
                else
                {
                    if(i-l<(b-a))
                    {
                        a=l;
                        b=i;
                    }
                }
                l=i;
            }
        }
        if(a==-1||b==-1) return {-1,-1};
        return {a,b};
    }
};