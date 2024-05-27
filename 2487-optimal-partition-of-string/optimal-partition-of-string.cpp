class Solution {
public:
    int partitionString(string s) {
        unordered_map <char,int> mp;
        int c=1;
        for(auto it:s)
        {
            if(mp.find(it)!=mp.end())
            {
                c++;
                mp.clear();
            }
             mp[it]++;
        }
        return c;
    }
};