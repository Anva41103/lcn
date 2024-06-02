class Solution {
public:
 struct comp {
        bool operator()(const pair<char, int>& a, const pair<char, int>& b) {
            if (a.first != b.first) 
                return a.first > b.first;
            return a.second < b.second;
        }
    };
    string clearStars(string s) {
        priority_queue<pair <char,int>, vector <pair<char,int>>, comp>p;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='*')
            {
                s[p.top().second]='#';
                p.pop();
            }
            else p.push({s[i],i});
        } 
        string ans="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!='#'&&s[i]!='*') ans+=s[i];
        }
        return ans;
    }
};