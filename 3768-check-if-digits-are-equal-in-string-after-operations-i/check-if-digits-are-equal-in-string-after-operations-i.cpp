class Solution {
public:
    string helper(string s)
    {
        string ans;
        for(int i=0;i<s.length()-1;i++)
        {
            int p=s[i]-'0'+s[i+1]-'0';
            p%=10;
            ans+=p+'0';
        }
        return ans;
    }
    bool hasSameDigits(string s) {
        while(s.length()>2)
        {
            s=helper(s);
        }
        cout<<s<<endl;
        if(s[0]==s[1]) return true;
        else return false;
    }
};