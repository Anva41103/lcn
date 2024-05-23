class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
         int m = maze.size();
        int n = maze[0].size();
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        queue<pair<pair<int, int>, int>> q;
        int r[] = {0, 1, 0, -1};
        int c[] = {1, 0, -1, 0};
        
        q.push({{entrance[0], entrance[1]}, 0});
        visited[entrance[0]][entrance[1]] = true;

        while (!q.empty()) {
            int x = q.front().first.first;
            int y = q.front().first.second;
            int d = q.front().second;
            q.pop();

            for (int i = 0; i < 4; ++i) {
                int rx = x + r[i];
                int cy = y + c[i];

                if (rx >= 0 && rx < m && cy >= 0 && cy < n && !visited[rx][cy] && maze[rx][cy] == '.') {
                    if (rx == 0 || rx == m - 1 || cy == 0 || cy == n - 1) {
                        return d + 1; // Found the exit
                    }

                    q.push({{rx, cy}, d + 1});
                    visited[rx][cy] = true;
                }
            }
        }

        return -1; // No exit found
    }
};