class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        vector<char> x = {'a', 'e', 'i', 'o', 'u'};
        int c = 0;
        for (int i=left;i<=right;i++) {
            string it=words[i];
            if (find(x.begin(), x.end(), it[0]) != x.end() &&
                find(x.begin(), x.end(), it.back()) != x.end())
                c++;
        }
        return c;
    }
};