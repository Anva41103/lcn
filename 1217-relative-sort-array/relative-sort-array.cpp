class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> m;
        for (int i = 0; i < arr1.size(); i++)
            m[arr1[i]]++;
        vector<int> ans;
        for (auto it : arr2) {
            while (m[it]--)
                ans.push_back(it);
            m.erase(it);
        }
        int k = ans.size();
        for (auto it = m.begin(); it != m.end();) {
            while (it->second-- > 0) {
                ans.push_back(it->first);
            }
            it = m.erase(it); // erase returns the next iterator
        }
        sort(ans.begin() + k, ans.end());
        return ans;
    }
};