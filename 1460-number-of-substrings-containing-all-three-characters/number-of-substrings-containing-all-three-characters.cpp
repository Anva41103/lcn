class Solution {
public:
    int numberOfSubstrings(string s) {
        vector <int> v={-1,-1,-1};
        int c=0;
        for(int i=0;i<s.length();i++)
        {
            v[s[i]-'a']=i;
            c+=1+*min_element(v.begin(), v.end());
        }
        return c;
    }
};