class Solution {
public:
    bool possible(vector <int> p, int n, int d)
    {
        int b=1;
        int l=p[0];
        for(int i=1;i<p.size();i++)
        {
            if(p[i]-l>=d)
            {
                b++;
                l=p[i];
            }
            if(b>=n) return true;

        }
        return false;
    }
    int maxDistance(vector<int>& p, int m) {
         sort(p.begin(), p.end()); // Sort the vector to apply the binary search correctly
        int b = 0; // Minimum possible distance
        int e = p.back() - p.front(); // Maximum possible distance
        while (b <= e) {
            int mi = (b + e) / 2;
            if (possible(p, m, mi)) b = mi + 1;
            else e = mi - 1;
        }
        return e;
    }
};