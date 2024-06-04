class Solution {
public:
int noofbits(int n)
{
    int c=0;
    while(n)
    {
        if(n&1) c++;
        n>>=1;
    }
    return c;
}
    vector<int> countBits(int n) {
        int l=0;
        vector <int> v;
        for(int i=0;i<=n;i++) v.push_back(noofbits(i));
        return v;
    }
};