class Solution {
public:
    static bool comp(pair <int,int> a, pair <int,int> b)
    {
        return a.first<b.first;
    }
    int joke(vector<pair<int, int>>& v, int k) {
        if (k < v[0].first) return 0; // No job available that can be handled by this worker
        
        int b = 0, e = v.size() - 1;
        int bestProfit = 0;
        while (b <= e) {
            int m = (b + e) / 2;
            if (v[m].first <= k) {
                bestProfit = max(bestProfit, v[m].second);
                b = m + 1;
            } else {
                e = m - 1;
            }
        }
        return bestProfit;
    }
    int maxProfitAssignment(vector<int>& d, vector<int>& p, vector<int>& worker) 
    {
        int n = d.size();
        vector<pair<int, int>> jobs(n);
        
        // Pair up difficulty and profit
        for (int i = 0; i < n; i++) {
            jobs[i] = {d[i], p[i]};
        }
        
        // Sort jobs based on difficulty
        sort(jobs.begin(), jobs.end(), comp);
        
        // Sort workers by their ability
        sort(worker.begin(), worker.end());
        
        int maxProfit = 0, j = 0, best = 0;
        
        // Iterate over each worker
        for (int i = 0; i < worker.size(); i++) {
            while (j < n && worker[i] >= jobs[j].first) {
                best = max(best, jobs[j].second); // Find the best profit for this worker's capability
                j++;
            }
            maxProfit += best; // Assign the best possible job to the current worker
        }
        
        return maxProfit;
    }
};