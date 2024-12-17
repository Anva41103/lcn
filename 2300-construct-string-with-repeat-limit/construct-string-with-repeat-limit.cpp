class Solution {
public:
    string repeatLimitedString(string s, int l) {
        vector<int> v(26, 0);
        for (auto it : s) v[it - 'a']++; 
        string k = "";
        for (int i = 25; i >= 0; i--) {
            if (v[i] == 0) continue;
            while (v[i] > 0) {
                int repeat = min(v[i], l);
                for (int j = 0; j < repeat; j++) {
                    k += ('a' + i);
                    v[i]--;
                }
                if (v[i] > 0) {
                    bool found = false;
                    for (int e = i - 1; e >= 0; e--) {
                        if (v[e] > 0) {
                            k += ('a' + e);
                            v[e]--;
                            found = true;
                            break;
                        }
                    }
                    if (!found) return k;
                }
            }
        }
        return k;
    }
};
