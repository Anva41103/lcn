class Solution {
public:
    bool canform(vector <int> set, int n, int sum, int ind)
{
    if(sum==n) return true;
    if(ind>=set.size()) return false;
    sum+=set[ind];
    bool a=canform(set,n,sum,ind+1);
    sum-=set[ind];
    bool b=canform(set,n,sum,ind+1);
    return a||b;
}
    int minPatches(vector<int>& nums, int n) {
        long long miss = 1;
        int i = 0;
        int patches = 0; 

        while (miss <= n) {
            if (i < nums.size() && nums[i] <= miss) {
                miss += nums[i];
                i++;
            } else {
                miss += miss;
                patches++;
            }
        }
        return patches;
    }
};