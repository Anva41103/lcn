class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector <int> boo;
        boo.push_back(0);
        int m=0;
        for(auto it:gain)
        {
            int j=boo[boo.size()-1];
            boo.push_back(it+j);
        }
        
        return *max_element(boo.begin(),boo.end());
    }
};