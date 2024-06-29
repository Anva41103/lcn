class Solution {
public:
    int minimumPartition(string s, int k) {
        int p=1,j=0;
        if(k<10) { for(auto it:s) {if((it-'0')>k) return -1;} }
        string temp="";
        long long l=0;
        for(int i=0;i<s.length();i++)
        {
            l=l*10+(s[i]-'0');
            if(l>k)
            {
                p++;
                l=(s[i]-'0');
            }
        }
        return p;
    }
};