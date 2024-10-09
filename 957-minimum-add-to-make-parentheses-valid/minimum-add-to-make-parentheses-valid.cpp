class Solution {
public:
    int minAddToMakeValid(string s) {
        int a=0,b=0;
        stack <char> st;
        for(auto it:s)
        {
            if(it==')') 
            {
                if(!st.empty())
                {
                    if(st.top()=='(') st.pop();
                    else st.push(it);
                }
                else st.push(it);
            }
            else 
            {
                st.push(it);
            }
        }
        return st.size();
    }
};