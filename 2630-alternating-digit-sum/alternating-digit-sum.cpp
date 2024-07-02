class Solution {
public:
    int alternateDigitSum(int n) {
        int i=1,s=0;
        while(n)
        {
            s+=i*(n%10);
            i*=-1;
            n/=10;
        }
        if(i==1) s*=-1;
        return s;
    }
};