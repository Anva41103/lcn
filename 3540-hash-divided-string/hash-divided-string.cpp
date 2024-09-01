class Solution {
public:
    string stringHash(string s, int k) {
        int temp=k;
        string p="";
        int sum=0;
        for(auto it:s)
        {
            sum+=it-'a';
            temp--;
            if(temp==0)
            {
                temp=k;
                char c= char(sum%26)+'a';
                // cout<<c<<endl;
                p+=c;
                sum=0;
            }
        }
        return p;
    }
};