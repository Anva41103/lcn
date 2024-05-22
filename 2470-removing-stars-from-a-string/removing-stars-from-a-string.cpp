class Solution {
public:
    string removeStars(string s) {
        string h="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='*')
            {
                if(h!="") 
                {
                    h.pop_back();
                }
                else i++;
            }
            else
            {
                h+=s[i];
            }
        }
        // string h="";
        // while(!st.empty())
        // {
        //     h=st.top()+h;
        //     st.pop();
        // }
        return h;
    }
};