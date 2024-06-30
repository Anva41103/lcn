class Solution {
public:
    int dig(int n)
    {
        int s=0;
        while(n)
        {
            s+=n%10;
            n/=10;
        }
        return s;
    }
    int differenceOfSum(vector<int>& nums) {
        int a=0,b=0;
        for(auto it:nums ) 
        {
            a+=it;
            b+=dig(it);
        }
        return abs(a-b);
    }
};