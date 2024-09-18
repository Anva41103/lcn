class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> v;
        for (auto num : nums) {
            v.push_back(to_string(num));
        }
        sort(v.begin(), v.end(), [](string &a, string &b) {
            return a + b > b + a;  
        });
        string result;
        for (auto &str : v) {
            result += str;
        }
        if (result[0] == '0') {
            return "0";
        }

        return result;
    }
};
