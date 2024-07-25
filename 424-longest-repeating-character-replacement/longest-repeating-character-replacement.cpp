class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> mp;
        int maxFreq = 0;
        int ans = 0;
        int r = 0, l = 0;
        while (r < s.length()) {
            mp[s[r]]++;
            maxFreq = max(maxFreq, mp[s[r]]);
            int windowSize = r - l + 1;
            int rest = windowSize - maxFreq;
            if (rest <= k) {
                ans = max(ans, windowSize);
            } else {
                mp[s[l]]--;
                l++;
            }
            r++;
        }
        return ans;
    }
};