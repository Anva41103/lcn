class Solution {
public:
    bool wordPattern(string p, string s) {
        string j="";
        vector <string> v;
        for(auto it:s)
        {
            if(it==' '){
                v.push_back(j);
                j="";
            }
            else j+=it;
        }
        v.push_back(j);
        unordered_map <char, string> mp1;
        unordered_map <string,char> mp2;
        if(p.length()!=v.size()) return false;
        for(int i=0;i<p.length();i++)
        {
            if(mp1.find(p[i])!=mp1.end()||mp2.find(v[i])!=mp2.end())
            {
                if(mp1[p[i]]!=v[i]||mp2[v[i]]!=p[i]) return false;
            }
            else
            {
                mp1[p[i]]=v[i];
                mp2[v[i]]=p[i];
            }
        }
        return true;
    }
};