class Solution {
public:
    int maxArea(vector<int>& h) {
        int m=0,i=0,j= h.size()-1;
        while(i<j)
        {
            int ca=min(h[i],h[j])*(j-i);
            m=max(m,ca);
           if( h[i]<h[j]) i++;
           else j--;
        }
        return m;
    }
};