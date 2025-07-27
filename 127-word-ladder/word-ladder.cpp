class Solution {
public:
    int ladderLength(string b, string e, vector<string>& w) {
        unordered_set<string> wordSet(w.begin(), w.end());
        if (!wordSet.count(e)) return 0;

        queue<pair<string, int>> q;
        q.push({b, 1});
        unordered_set<string> visited;
        visited.insert(b);

        while (!q.empty()) {
            auto [curr, depth] = q.front();
            q.pop();

            if (curr == e) return depth;

            for (int i = 0; i < curr.size(); ++i) {
                string temp = curr;
                for (char c = 'a'; c <= 'z'; ++c) {
                    temp[i] = c;
                    if (wordSet.count(temp) && !visited.count(temp)) {
                        q.push({temp, depth + 1});
                        visited.insert(temp);
                    }
                }
            }
        }
        return 0;
    }
};
