class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int n = spaces.size();
        string k="";
        int i=0;
        for(int j=0;j<s.length();j++)
        {
            if(i<n&&spaces[i]==j)
            {
                k+=" ";
                i++;
            }
            k+=s[j];
        }
        return k;
    }
};