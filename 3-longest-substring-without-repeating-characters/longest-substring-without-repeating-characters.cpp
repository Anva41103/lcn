class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         vector < int > mp(256, -1);
        int l=0, r=0, m=0;
        while(r<s.length())
        {
            if(mp[s[r]]!=-1)
            {
                if(mp[s[r]]>=l) l= mp[s[r]]+1;
            }
            m=max(m, r-l+1);
        mp[s[r]]=r;
        r++;
        }
        return m;
    }
    
};