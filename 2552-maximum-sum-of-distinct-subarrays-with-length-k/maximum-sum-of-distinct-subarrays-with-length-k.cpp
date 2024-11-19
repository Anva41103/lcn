class Solution {
public:
    long long maximumSubarraySum(vector<int>& a, int k) {
        long long sum = 0, maxSum = 0;
        int i = 0;
        unordered_set<int> s;
        for (int j = 0; j < a.size(); j++) {
            while (s.count(a[j]) || s.size() == k) {
                sum -= a[i];
                s.erase(a[i]);
                i++;
            }
            sum += a[j];
            s.insert(a[j]);
            if (s.size() == k) 
                maxSum = max(maxSum, sum);
        }
        return maxSum;
    }
};