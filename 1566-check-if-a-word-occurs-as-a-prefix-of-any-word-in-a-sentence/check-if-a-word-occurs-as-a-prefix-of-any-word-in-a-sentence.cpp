class Solution {
public:
    bool compare(string s1, string s2)
    {
        if(s2.length()<s1.length()) return false;
        int l= s1.length();
        for(int i=0;i<l;i++)
        {
            if(s1[i]!=s2[i]) return false;
        }
        return true;
    }
    int isPrefixOfWord(string sentence, string searchWord) {
        map <string,int> mp;
        string temp="";
        int c=1;
        for(auto it:sentence)
        {
            if(it==' ') 
            {
                if(compare(searchWord,temp)) return c;
                c++;
                temp="";
            }
            else temp+=it;
        }
        if(compare(searchWord,temp)) return c;
        // if(!mp[temp]) mp[temp]=c;
        // for(auto it:sentence)
        // {
        //     if(compare(searchWord,it.first)) return it.second;
        // }
        return -1;
    }
};