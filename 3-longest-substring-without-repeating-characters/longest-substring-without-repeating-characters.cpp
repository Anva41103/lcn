class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map <char, int> m;
        if(s.length()<=1) return s.length();
        int i = 0, j = 0, maxi = 0;
        
        while (j < s.length()) {
            if (m[s[j]] == 0) {
                m[s[j]]++;
                maxi = std::max(maxi, j - i + 1);
                j++;
            } else {
                m[s[i]]--;
                i++;
            }
        }
        return maxi;
    }
};