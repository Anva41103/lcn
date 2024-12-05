class Solution {
public:
    bool canChange(string s, string t) {
    int i=0,j=0;
    int a=s.length(),b=t.length();
    while(i<a&&j<b)
    {
        int x=s[i];
        int y=t[j];
        if(x=='_'&&y=='_') i++,j++;
        else if(x=='_') i++;
        else if(y=='_') j++;
        else if (x==y&&(x=='L'&&i>=j)||(x=='R'&&i<=j)) i++,j++;
        else return false;
    }
    while(i<a&&s[i]=='_') i++;
    while(j<b&&t[j]=='_') j++;
    return i==a&&j==b;
    }
};