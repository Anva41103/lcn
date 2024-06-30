class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int e=0,o=0,b=0,c=nums[0]%2;
        for(auto it: nums)
        {
            if(it%2==0) e++;
            else o++;
            if(it%2==c)
            {
                b++;
                c=1-c;
            }
        }
        return max(o,max(e,b));
    }
};