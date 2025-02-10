class Solution {
public:
    string clearDigits(string s) {
        stack <char> k;
        for(auto it: s)
        {
            if((it>='0'&&it<='9'))
            {
                if(!k.empty()) k.pop();
            }
            else k.push(it);
        }
        string ans;
        while(!k.empty())
        {
            ans=k.top()+ans;
        k.pop();
        }
        return ans;
    }
};