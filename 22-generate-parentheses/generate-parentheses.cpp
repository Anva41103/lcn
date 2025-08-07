class Solution {
public:
    void helper(vector <string> &ans, string curr, int o, int c)
    {
        if(o==0&&c==0)
        {
            ans.push_back(curr);
            return;
        }
        if(o==c)
        {
            string j=curr;
            j+='(';
            helper(ans,j,o-1,c);
        }
        else if(o==0){
            string j=curr;
            j+=')';
            helper(ans,j,o,c-1);
        }
        else
        {
            string i=curr;
            string j=curr;
            i+=')';
            j+='(';
            helper(ans,i,o,c-1);
            helper(ans,j,o-1,c);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector <string> ans;
        string curr="";
        helper(ans,curr,n,n);
        return ans;
    }
};