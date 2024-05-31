class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int> frequencyMap;
        
        // Build the frequency map
        for (int num : nums) {
            frequencyMap[num]++;
        }
        
        // Find the elements that appear only once
        vector<int> result;
        for (const auto& entry : frequencyMap) {
            if (entry.second == 1) {
                result.push_back(entry.first);
            }
        }
        
        return result;
            


    }
};