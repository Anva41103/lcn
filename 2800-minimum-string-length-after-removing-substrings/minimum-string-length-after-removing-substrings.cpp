class Solution {
public:
string stringcheck(string s)
{
    stack <char> st;
    for(auto it:s)
        {
            if(it=='B')
            {
                if(!st.empty())
                {
                    if(st.top()=='A') st.pop();
                    else st.push(it);
                }
                else st.push(it);
            }
            else if(it=='D')
            {
                if(!st.empty())
                {
                    if(st.top()=='C') st.pop();
                    else st.push(it);
                }
                else st.push(it);
            }
            else st.push(it);
        }
        string ans="";
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
}
    int minLength(string s) {
        string ans=s;
       auto it1 = ans.find("AB");
auto it2 = ans.find("CD");
while (it1 != std::string::npos || it2 != std::string::npos) {
    ans = stringcheck(ans); 
    it1 = ans.find("AB");
    it2 = ans.find("CD");
}
        return ans.length();
    }
};