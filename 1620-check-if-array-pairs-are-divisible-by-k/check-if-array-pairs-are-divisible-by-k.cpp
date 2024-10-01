class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map <int,int> m;
        for(auto it: arr)
        {
            m[((it%k)+k)%k]++;
        }
        for(auto it:m)
        {
            if(2*it.first==k||it.first==0) { if(it.second%2) return false;} 
            else if(it.second!=m[k-it.first]) return false;
        }
        return true;
    }
};