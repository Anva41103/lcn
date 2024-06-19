class Solution {
public:
    bool trial(vector <int> v, int m, int d, int k)
    {
        int n=0,c=0;
        for(auto it: v)
        {
            if(it<=d)
            {
                c++;
            }
            else 
            {
                n+=c/k;
                c=0;
            }
        }
        n+=c/k;
        return n>=m;
    }
    int minDays(vector<int>& b, int mi, int k) {
        long long v=1ll*mi*k*1ll;
        if(v>b.size()) return -1;
        int s= *min_element(b.begin(),b.end());
        int e= *max_element(b.begin(),b.end());
        while(s<=e)
        {
            int m=(s+e)/2;
            if(trial(b,mi,m,k)) e=m-1;
            else s=m+1;
        }
        return s;
    }
};