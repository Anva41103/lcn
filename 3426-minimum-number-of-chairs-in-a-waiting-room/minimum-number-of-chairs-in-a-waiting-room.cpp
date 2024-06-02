class Solution {
public:
    int minimumChairs(string s) {
        int c=0,m=0;
        for(auto it: s)
        {
            if(it=='E') c++;
            else c--;
            m=max(m,c);
        }
        return m;
    }
};