class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0, j = 0;
        int s = 0, m = nums.size() + 1;

        while (j < nums.size()) {
            s += nums[j++];

            while (s >= target) {
                m = min(m, j - i);
                s -= nums[i++];
            }
        }

        return (m > nums.size()) ? 0 : m;
    }
};