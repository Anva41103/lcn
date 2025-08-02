class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=0;
        map <int,int> mp;
        int k=0;
        while(j<nums.size())
        {
            if(!mp.count(nums[j]))
            {
                nums[i]=nums[j];
                i++;
                k++;
                mp[nums[j]]++;
            }
            j++;
        }
        return k;
    }
};