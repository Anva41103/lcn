class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map <int,int> mp;
        vector <int> v;
        for(auto it: nums)
        {
            mp[it]++;
            if(mp[it]==2) v.push_back(it);
        }
        return v;
    }
};