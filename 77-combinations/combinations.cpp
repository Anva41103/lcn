class Solution {
public:
    void bhoot(vector <vector <int>> &v, vector <int> p,int ind, vector <int> &t, int l)
    {
        if(t.size()==l) 
        {
            v.push_back(t);
            return;
        }
        if(ind==p.size())
        {
            if(t.size()==l) v.push_back(t);
            return;
        }
        t.push_back(p[ind]);
        bhoot(v,p,ind+1,t,l);
        t.pop_back();
        bhoot(v,p,ind+1,t,l);
    }
    vector<vector<int>> combine(int n, int k) {
        vector <vector <int>> v;
        vector <int> p,t;
        for(int i=0;i<n;i++) p.push_back(i+1);
        bhoot(v,p,0,t,k);
        return v;
    }
};