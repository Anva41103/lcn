class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int p=0;
        for(auto it:nums) { if(it%3!=0) p++;}
        return p;
    }
};