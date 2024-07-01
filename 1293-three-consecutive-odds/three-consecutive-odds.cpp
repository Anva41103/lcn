class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int k=0;
        for(auto it: arr)
        {
            if(it&1) k++;
            else k=0;
            if(k==3) return true;
        }
        return false;
    }
};