class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        int f=0;
        if(s.length()==0) return true;
        while(i<s.length()&&j<t.length())
        {
            if(s[i]==t[j])
            {
                i++;
                j++;
                f=1;
            }
            else 
            {j++;
            f=0;}
        }
        if(i!=s.length()) return false;
        return f==1;
    }
};