// class Solution {
// public:
//     void fin( vector <vector<int>> &v, vector <int> n, int a, vector <int> &temp)
//     {
//         if(n.size()==a) 
//         {
//             v.push_back(temp);
//             return;
//         }
//         temp.push_back(n[a]);
//         fin(v,n,a+1,temp);
//         temp.pop_back();
//         fin(v,n,a+1,temp);
//     }
//     vector<vector<int>> subsets(vector<int>& nums) {
//         vector <vector<int>> v;
//         vector <int> temp;
//         fin(v, nums, 0, temp);
//         return v;
//     }
// };
class Solution {
public:
    void yep(int ind, vector <int> &temp,vector<int>& nums, vector <vector <int>> &ans )
    {
        if(ind==nums.size()) { ans.push_back(temp); return;}
        yep(ind+1,temp,nums,ans);
        temp.push_back(nums[ind]);
        yep(ind+1,temp, nums, ans);
        temp.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector <vector <int>> ans;
        vector <int> temp;
        yep(0,temp,nums,ans);
        return ans;
    }
};