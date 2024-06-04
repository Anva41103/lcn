class Solution {
public:
    int divide(int a, int b) {
        if(a==b) return 1;
        bool sign= true;
        if(a>=0&&b<0||a<=0&&b>0) sign=false;
        long x=abs(a);
        long y= abs(b);
        long q=0;
        while(x>=y)
        {
            int c=0;
            while(x>= (y<<(c+1)))
            {
                c++;
            }
            q+=1<<c;
            x-= (y<<c);
        }
        if(q==(1<<31)&&sign) return INT_MAX;
        else if(q==(1<<31)&&sign) return INT_MIN;
        return sign?q:-q;
    }
};