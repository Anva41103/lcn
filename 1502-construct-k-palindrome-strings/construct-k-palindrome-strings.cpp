class Solution {
public:
    bool canConstruct(string s, int k) {
        unordered_map <char,int> mp;
        for(auto it:s)
        {
            mp[it]++;
        }
        int o=0;
        for(auto it: mp)
        {
            if(it.second&1) o++;
        }
        if(s.length()<k) return false;
        if(o>k) return false;
        else return true;
    }
};