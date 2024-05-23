class Solution {
public:
    string addBinary(string a, string b) {
        string ans="";
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int c=0,i;
        for(i=0;i<min(a.length(),b.length());i++)
        {
            if(a[i]=='1')
            {
                if(b[i]=='1')
                {
                    if(c==0) { ans+='0'; c=1;}
                    else {ans+='1';c=1;}
                }
                else {
                if(c==0) {ans+='1';c=0;}
                else { ans+='0'; c=1;}
                }
            }
            else
            {
                if(b[i]=='1')
                {
                if(c==0) {ans+='1';c=0;}
                else { ans+='0'; c=1;}
                }
                else
                {
                    if(c==1) {ans+='1'; c=0;}
                    else ans+='0';
                }
            }
        }
        int l=i;
       while(i<a.length())
       {
        if(a[i]=='0')
        {
            if(c==0) ans+='0';
            else ans+='1';
            c=0;
        }
        else{
            if(c==0) ans+='1';
            else {ans+='0'; c=1;}
        }
        i++;
       }
       while(l<b.length())
       {
        if(b[l]=='0')
        {
            if(c==0) ans+='0';
            else ans+='1';
            c=0;
        }
        else{
            if(c==0) ans+='1';
            else {ans+='0'; c=1;}
        }
        l++;
       }
       if(c==1) ans+='1';
    reverse(ans.begin(),ans.end());
    return ans;
}
};