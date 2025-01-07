class Solution {
public:
    vector <int> constrlps(string a)
    {
        int n=a.length();
        vector <int> v(n);
        v[0]=0;
        int i=1;
        int len=0;
        while(i<n)
        {
            if(a[i]==a[len])
            {
                len++;
                v[i]=len;
                i++;
            }
            else
            {
                if(len!=0)
                {
                    len=v[len-1];
                }
                else
                {
                    v[i]=0;
                    i++;
                }
            }
        }
        return v;
    }
    bool kmp(string a, string b)
    {
        int n=a.length();
        int m=b.length();
        vector <int> lps(m);
        lps=constrlps(b);
        int i=0,j=0;
        while(i<n)
        {
            if(a[i]==b[j])
            {
                i++;
                j++;;
                if(j==m) return true;
            }
            else
            {
                if(j!=0) j=lps[j-1];
                else i++;
            }
        }
        return false;
    }
    vector<string> stringMatching(vector<string>& words) {
        vector <string> ans;
        int n=words.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j) continue;
                if(kmp(words[i],words[j])) { if(find(ans.begin(),ans.end(),words[j])==ans.end()) ans.push_back(words[j]); }
            }
        }
        return ans;
    }
};