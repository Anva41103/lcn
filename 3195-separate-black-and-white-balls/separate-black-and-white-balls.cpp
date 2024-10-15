class Solution {
public:
    long long minimumSteps(string s) {
        long long swap = 0;
        int black = 0; 
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]=='0') black++;
            else swap+=black;
        }
        return swap;
    }
};