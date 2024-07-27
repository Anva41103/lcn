class Solution {
public:
    void floydWarshall(vector<vector<int>>& dist) {
        int size = dist.size();
        for (int k = 0; k < size; k++) {
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    if (dist[i][k] < 1e9 && dist[k][j] < 1e9) {  // To prevent overflow
                        dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                    }
                }
            }
        }
    }

    long long minimumCost(string s, string t, vector<char>& o, vector<char>& c, vector<int>& cost) {
        int n = o.size();
        vector<vector<int>> edges(26, vector<int>(26, 1e9));

        // Initialize self-loops to 0
        for (int i = 0; i < 26; i++) {
            edges[i][i] = 0;
        }

        // Fill the initial edges from the given input
        for (int i = 0; i < n; i++) {
            edges[o[i] - 'a'][c[i] - 'a'] = min(edges[o[i] - 'a'][c[i] - 'a'], cost[i]);
        }

        floydWarshall(edges);

        long long totalCost = 0;
        for (int i = 0; i < s.size(); i++) {
            int cost = edges[s[i] - 'a'][t[i] - 'a'];
            if (cost >= 1e9) return -1; // If cost is too high, return -1 indicating no possible transformation
            totalCost += cost;
        }
        return totalCost;
    }
};
