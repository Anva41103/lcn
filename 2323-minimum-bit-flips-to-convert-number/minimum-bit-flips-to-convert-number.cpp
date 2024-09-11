class Solution {
public:
    int minBitFlips(int start, int goal) {
        int j=start^goal;
        int c=0;
        cout<<j;
        while(j)
        {
            c+=j%2;
            j/=2;
        }
        return c;
    }
};