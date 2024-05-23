class Solution {
public:
//int p=0;
int tryy(vector<int>& temp, int ind, const vector<int>& nums, int k, int& count) {
        if (ind == nums.size()) {
            return 1;
        }
        
        // Calculate the values for checking
        int a =  nums[ind]-k;
        int b = k + nums[ind];
        int p=0,np=0;
        // Check if neither `a` nor `b` is in the current subset
        if (find(temp.begin(), temp.end(), a) == temp.end() &&
            find(temp.begin(), temp.end(), b) == temp.end()) {
            
            temp.push_back(nums[ind]);
            p=tryy(temp, ind + 1, nums, k, count);
            temp.pop_back();
        }

        // Proceed without including the current element
        np=tryy(temp, ind + 1, nums, k, count);
        return p+np;
    }
    int beautifulSubsets(vector<int>& nums, int k) {
       vector<int> temp;
       //sort(nums.begin(),nums.end());
        int count = 0;
        return tryy(temp, 0, nums, k, count)-1;
    }
};