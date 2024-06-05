class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n = spells.size();
        int m = potions.size();

        vector<int> v;

        sort(potions.begin(),potions.end());

        for(int i=0;i<n;i++)
        {
            long long spell = spells[i];

            int start = 0;
            int end = m;
            int ans=m;
            while(start < end)
            {
                int mid = start + (end - start)/2;
                if(spell * potions[mid] >= success)
                {
                    ans=mid;
                    end = mid;
                }
                else
                {
                    start = mid + 1;
                }
            }
            v.push_back(m - ans);
        }
        return v;
    }
};