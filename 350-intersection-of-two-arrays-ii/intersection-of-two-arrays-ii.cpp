class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map <int,int> m;
        for(auto it: nums1) m[it]++;
        vector <int> v;
        for(auto it: nums2)
        {
            if(m[it])
            {
                v.push_back(it);
                m[it]--;
            }
        }
        return v;
    }
};