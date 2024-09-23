class Solution {
public:
    bool reportSpam(vector<string>& message, vector<string>& bannedWords) {
        unordered_map <string,int> m;
        for(auto it: bannedWords) m[it]++;
        int i=0;
        for(auto it: message) if(m[it]) i++;
        return i>=2;
    }
};