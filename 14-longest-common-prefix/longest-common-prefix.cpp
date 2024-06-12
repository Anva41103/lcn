class Solution {
public:
    static bool comparator(string a, string b) {
        return a.length() < b.length();
    }
    string longestCommonPrefix(vector<string>& s) {
        sort(s.begin(), s.end());
        string k = "";
        string p = s[0];
        int j = 1;
        for (int i = 0; i < p.length(); i++) {
            int j = 1;
            while (j < s.size()) {
                if (s[j++][i] != p[i])
                    return k;
            }
            k += p[i];
        }
        return k;
    }
};