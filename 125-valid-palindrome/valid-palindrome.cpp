class Solution {
public:
    bool isPalindrome(string s) {
        string j="";
        for(auto it:s)
        {
            if(it>='0'&&it<='9'||it>='a'&&it<='z')
            {
                j+=it;
            }
            if(it>='A'&&it<='Z') j+=it-'A'+'a';
        }
        cout<<j;
        int i=0,w=j.length()-1;
        while(i<=w)
        {
            if(j[i++]!=j[w--]) return false;
        }
        return true;
    }
};