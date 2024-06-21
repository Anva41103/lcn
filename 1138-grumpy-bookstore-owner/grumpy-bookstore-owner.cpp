class Solution {
public:
    int joke(vector<int>& c, vector<int>& g,int ind, int m)
    {
        int s=0;
        for(int i=0;i<g.size();i++)
        {
            if(i==ind) { i=ind+m-1; continue;}
            if(g[i]==0) s+=c[i];
        }
        cout<<s<<endl;
        return s;

    }
    int maxSatisfied(vector<int>& c, vector<int>& g, int m) {
        int s=0;
        for(int i=0;i<c.size();i++)
        {
            if(g[i]==0) s+=c[i];
        }
        int p=0, maxi=0;
        for(int i=0;i<c.size();i++)
        {
            if(g[i]==1) p+=c[i];
            if(i>=m)
            {
                if(g[i-m]==1) p-=c[i-m];
            }
            maxi=max(maxi,p);
        }
        return maxi+s;
    }
};