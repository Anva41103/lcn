class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        vector <int> v;
        v.push_back(0);
        int a=0;
        for(int i=1;i<nums.size();i++)
        {
            if((nums[i]+nums[i-1])%2==0) a++;
            v.push_back(a);
        }
        vector <bool> ans;
        for(auto it: queries)
        {
            if(v[it[0]]==v[it[1]])
            ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
}
};