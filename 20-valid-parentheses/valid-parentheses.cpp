class Solution {
public:
    bool isValid(string s) {
        stack  <char> st;
        for(auto it:s)
        {
            if(st.empty())
            {
                if(it!=']'&&it!=')'&&it!='}') st.push(it);
                else return false;
            }
            else if(it==')')
            {
                if(st.top()=='(') st.pop();
                else return false;
            }
            else if(it==']')
            {
                if(st.top()=='[') st.pop();
                else return false;
            }
            else if(it=='}')
            {
                if(st.top()=='{') st.pop();
                else return false;
            }
            else st.push(it);
        }
        if(st.empty())
        return true;
        else return false;
    }
};