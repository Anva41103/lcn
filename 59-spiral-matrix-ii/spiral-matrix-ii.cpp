class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector <vector <int>> v(n, vector <int>(n,0));
        int l=0,r=n-1;
        int t=0,b=n-1;
        int p=1;
        while(l<=r&&t<=b)
        {
            for(int i=l;i<=r;i++) { v[t][i]=p++;} t++;
            for(int i=t;i<=b;i++) {v[i][r]=p++;} r--;
            if (t <= b) {
                for (int i = r; i >= l; i--)
                    { v[b][i]= p++;}
                b--;
            }
            if (l <= r) {
                for (int i = b; i >= t; i--)
                    { v[i][l]=p++;}
                l++;
            }
        }
        return v;
    }
};