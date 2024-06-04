class Solution {
public:
    int minFlips(int a, int b, int c) {
        int p=0;
        while(a||b||c)
        {
            int i=a&1;
            int j=b&1;
            int k=c&1;
            a=a>>1;
             b=b>>1;
            c=c>>1;
            if((i|j)!=k)
            {
                if(k==1) p++;
                else
                {
                    if(i==1) p++;
                    if(j==1) p++;
                }
            }
        }
        return p;
    }
};