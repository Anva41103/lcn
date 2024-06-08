class Solution {
public:
long long blue (vector <int> v,int n)
{
    long long s=0;
    for(int i=0;i<v.size();i++)
    {
        //if(s>=INT_MAX) return s;
        s= s+ ceil((double)v[i] / n);
    }
    return s;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int m= *max_element(piles.begin(),piles.end());
        int l=1,r=m;
        int p;
        while(l<=r)
        {
            p=(l+r)/2;
            if(blue(piles,p)<=h) r=p-1;
            else l=p+1;
        }
        return l;
    }
};