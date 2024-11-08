class Solution {
public:
     set <vector <int>> s;
    void solve(vector <int> nums, int ind, vector <vector <int>> & ans)
    {
        if(ind>=nums.size()) 
        {
            int n= s.size();
            s.insert(nums);
            if(s.size()>n)
            { ans.push_back(nums);}
            return;
        }
        for(int i=ind;i<nums.size();i++)
        {
            swap(nums[ind],nums[i]);
            solve(nums,ind+1,ans);
            swap(nums[ind],nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        int ind=0;
        solve(nums,ind,ans);
        return ans;
    }
};