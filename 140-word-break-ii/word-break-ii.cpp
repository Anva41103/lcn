class Solution {
public:
    void poke(string s, int ind, map <string,bool> &mp, vector <string> &ans, string &k)
    {
        if(ind>=s.size())
        {
            ans.push_back(k);
            return;
        }
        for(int i=ind+1;i<=s.size();i++)
        {
            string p=s.substr(ind,i-ind);
            if(mp[p])
            {
                if(k.size()==0) k+=p;
                else k+=" "+p;
                poke(s,i,mp,ans,k);
                int x = 0;
                while (x < p.size()) {
                    x++;
                    k.pop_back();
                }

                if (k.size() > 0) {
                    k.pop_back();
                }
            }
        }
    }
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        map <string, bool> mp;
        for(auto it:wordDict)
        {
            mp[it]=true;
        }
        vector <string> ans;
        string k="";
        poke(s,0,mp,ans,k);
        return ans;
    }
};