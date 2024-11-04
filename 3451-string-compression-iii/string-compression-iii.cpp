class Solution {
public:
    string compressedString(string word) {
        string ans = "";
        int c = 1;
        for(int i = 0; i<word.size()-1; i++) {
            if(word[i]==word[i+1] && c < 9) {
                c++;}
            else {string a = to_string(c);
                ans += a;
                ans.push_back(word[i]);
                c = 1; } }
        string a = to_string(c);
        ans += a;
        ans.push_back(word.back());
        return ans;
    }
};