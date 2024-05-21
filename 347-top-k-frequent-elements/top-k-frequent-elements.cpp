class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int, int> freqMap;
    for (int num : nums) {
        freqMap[num]++;
    }

    // Step 2: Use a min-heap (priority queue) to keep track of the top K frequent elements
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    for (auto& entry : freqMap) {
        pq.push({entry.second, entry.first});
        if (pq.size() > k) {
            pq.pop();
        }
    }

    // Step 3: Extract the elements from the priority queue
    vector<int> result;
    while (!pq.empty()) {
        result.push_back(pq.top().second);
        pq.pop();
    }

    // Since the elements in the priority queue are in ascending order,
    // we might want to reverse the result to have it in descending order.
    reverse(result.begin(), result.end());

    return result;
    }
};