class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map <string, int> mp;
        vector <string> a1,a2;
        string j="";
        for(auto it:s1)
        {
            if(it==' ')
            {
                a1.push_back(j);
                j="";
            }
            else j+=it;
        }
        a1.push_back(j);
        j="";
        for(auto it:s2)
        {
            if(it==' ')
            {
                a2.push_back(j);
                j="";
            }
            else j+=it;
        }
        a2.push_back(j);
        for(auto it:a1)
        {
            mp[it]++;
        }
        for(auto it:a2)
        {
            mp[it]++;
        }
        vector <string> v;
        for(auto it:mp)
        {
            if(it.second==1) v.push_back(it.first);
        }
        return v;
    }
};