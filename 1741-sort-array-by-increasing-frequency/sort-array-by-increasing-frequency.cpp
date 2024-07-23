class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
    unordered_map <int,int> m;
    // set <int, greater <int>> s;
    for(auto it:nums)
    {
        m[it]++;
        // s.insert(it);
    }   
    sort(nums.begin(),nums.end(),[&m](int a, int b){if(m[a]==m[b]) return a>b; else return m[a]<m[b];});
    return nums;
    }
};