class Solution {
public:
    void back(string &s,int start,unordered_set <string> &m,int c, int &ans)
    {
        if(c+(s.size()-start)<=ans)return;
        if(start==s.size())
        {
            ans=max(ans,c);
            return;
        }
        for(int e=start+1;e<=s.size();e++)
        {
            string sub= s.substr(start,e-start);
            if(m.find(sub)==m.end()) { m.insert(sub);
            back(s,e,m,c+1,ans);
            m.erase(sub);}
        }
    }
    int maxUniqueSplit(string s) {
        unordered_set <string> m;
        int ans=0;
        back(s,0,m,0,ans);
        return ans;
    }
};