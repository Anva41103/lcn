class Solution {
public:
    bool isprime(int n)
    {
        for(int i=2;i<n;i++)
        {
            if(n%i==0) return false;
        }
        return true;
    }
    void fac(int n, vector <int> &v)
   {
    for(int i=2;i<=n;i++)
    {
        if(n%i==0) 
        {
            if(isprime(i)) { v[i]++;}
            //  if(isprime((n/i))) v[n/i]++;
        }
    }
   }
    int distinctPrimeFactors(vector<int>& nums) {
        int k=*max_element(nums.begin(),nums.end());
        vector<int> v(k+1,0);
        int t=0;
        for(auto it:nums)
        {
            fac(it,v);
        }
        for(auto it:v) { if(it) {  t++;}}
        return t;
    }
};