class Solution {
public:
    int hammingWeight(int n) {
        int j=0;
        while(n)
        {
            if(n&1) j++;
            n>>=1;
        }
        return j;
    }
};