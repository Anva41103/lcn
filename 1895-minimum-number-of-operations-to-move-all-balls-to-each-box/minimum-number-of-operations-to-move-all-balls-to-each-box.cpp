class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();
        vector <int> v(n,0);
        int bl=0,ml=0;
        int br=0,mr=0;
        for(int i=0;i<n;i++)
        {
            v[i]+=ml;
            bl+=boxes[i]-'0';
            ml+=bl;
            int j=n-1-i;
            v[j]+=mr;
            br+=boxes[j]-'0';
            mr+=br;
        }
        return v;
    }
};