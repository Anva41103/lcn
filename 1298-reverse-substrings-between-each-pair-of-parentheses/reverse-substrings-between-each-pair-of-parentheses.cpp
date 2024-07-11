class Solution {
public:
    string reverseParentheses(string s) {
        string k="";
        stack <char> st;
        for(auto it:s)
        {
            if(it!=')')
            {
                st.push(it);
            }
            else
            {
                while(st.top()!='(')
                {
                    k+=st.top();
                    st.pop();
                }
                st.pop();
                for(auto i:k)
                {
                    st.push(i);
                }
                k="";
            }
        }
        while(!st.empty())
        {
            k=st.top()+k;
            st.pop();
        }
        return k;
    }
};