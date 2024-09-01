class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        int k=1000, ans=0;
        while(k)
        {
            int a=num1/k;
            num1%=k;
            int b= num2/k;
            num2%=k;
            int c= num3/k;
            num3%=k;
            k/=10;
            ans=ans*10+min(a,min(b,c));
        }
        return ans;
    }
};