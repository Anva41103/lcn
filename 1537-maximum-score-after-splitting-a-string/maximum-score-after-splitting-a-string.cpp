class Solution {
public:
    int maxScore(string s) {
        int n = s.length(), c = 0, ans = 0, k = 0;
        for (char it : s) if (it == '1') c++;
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == '0') k++;
            else c--;
            ans = max(ans, k + c);
        }
        return ans;
    }
};
