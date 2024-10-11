class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        priority_queue<int> pq;
        vector<int> mp(26, 0);
        for (auto it : tasks) {
            mp[it - 'A']++;
        }
        for (int i = 0; i < 26; i++) {
            if (mp[i])
                pq.push(mp[i]);
        }
        int t = 0;
        while (!pq.empty()) {
            vector<int> v;
            int c = n + 1;
            while (c &&!pq.empty()) {
                int ma = pq.top();
                pq.pop();
                if (ma > 1)
                    v.push_back(ma - 1);
                t++;
                c--;
            }
            for (auto it : v)
                pq.push(it);
            if (pq.empty())
                break;
            t += c;
        }
        return t;
    }
};