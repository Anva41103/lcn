class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        unordered_map <char,int> m;
        for(auto it:words[0]) m[it]++;
        for(auto it:words)
        {
            unordered_map <char,int> temp;
            for(auto p: it)
            {
                temp[p]++;
            }
            for(auto j: m)
            {
                if(temp[j.first]!=j.second)
                {
                    m[j.first]=min(j.second,temp[j.first]);
                }
            }
        }
        vector <string> v;
        for(auto it:m) 
        {
            while(it.second--)
            {
                char x=it.first;
                cout<<x;
                v.push_back(string(1, x));
            }
        } 
        return v;
    }
};