class Solution {
public:
    bool isBalanced(string num) {
        int a=0,b=0;
        for(int i=0;i<num.size();i++)
        {
            if(i&1) a+=num[i]-'0';
            else b+=num[i]-'0';
        }
        // cout<<a<<" "<<b<<endl;
        return a==b;
    }
};