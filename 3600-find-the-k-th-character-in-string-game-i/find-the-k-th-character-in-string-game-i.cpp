class Solution {
public:
    void helper(string &h)
    {
        int s=h.size();
        for(int i=0;i<s;i++)
        {
            int p=h[i]-'a';
            p++;
            if(p>=26) p=0;
            char t=p+'a';
            h+=t;
        }
    }
    char kthCharacter(int k) {
        int i=1,j=k;
        string ans="a";
        while(i<=k)
        {
            i*=2;
            helper(ans);
        }
        return ans[k-1];
    }
};