class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map <char, int> mp;
        int f=0;
        for(auto it: s)
        {
            mp[it]++;
        }
        int a=1;
        for(auto it: mp)
        {
            if(it.second%2==0) a+=it.second;
            else a+=it.second-1;
        }
        if(a>s.size()) a--;
        return a;
    }
};