class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int c=0;
        vector <int> k= heights;
        sort(k.begin(),k.end());
        for(int i=0;i<heights.size();i++)
        { if(k[i]!=heights[i]) c++;}
        return c;
    }
};