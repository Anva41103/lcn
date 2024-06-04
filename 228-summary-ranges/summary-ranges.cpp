class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
       vector<string> v;
        if (nums.empty()) return v; 
        int n = nums.size();
        string s = to_string(nums[0]);
        int l = nums[0];
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1] + 1) {
                continue;
            } else {
                if (nums[i - 1] != l) {
                    s += "->" + to_string(nums[i - 1]);
                }
                v.push_back(s);
                s = to_string(nums[i]);
                l = nums[i];
            }
        }
        if (nums[n - 1] != l) {
            s += "->" + to_string(nums[n - 1]);
        }
        v.push_back(s);
        return v;
    }
};