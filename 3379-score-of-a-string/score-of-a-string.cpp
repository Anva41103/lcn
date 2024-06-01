class Solution {
public:
    int scoreOfString(string s) {
        int a=0;
        for(int i=1;i<s.length();i++)
        {
            a+=abs(s[i]-s[i-1]);
        }
        return a;
    }
};