class Solution {
public:
    int bit(int n)
    {
        int c=0;
        while(n)
        {
            c+=n%2;
            n/=2;
        }
        return c;
    }
    bool sorted(vector <int> &v)
    {
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i]>v[i+1])return false;
        }
        return true;
    }
    bool canSortArray(vector<int>& nums) {
        int n= nums.size();
        int c=0;
        for(int i=0;i<n-1;i++)
        {
            if(sorted(nums)) return true;
            for(int j=0;j<n-1-i;j++)
            {
                if(nums[j]>nums[j+1])
                {
                    if(bit(nums[j])==bit(nums[j+1]))
                    {
                        swap(nums[j],nums[j+1]);
                    }
                }
            }
        }
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]>nums[i+1]) return false;
        }
        return true;
    }
};