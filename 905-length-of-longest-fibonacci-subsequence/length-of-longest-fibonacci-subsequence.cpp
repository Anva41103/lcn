class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        int n=arr.size();
       multiset <int> dp(arr.begin(),arr.end());
       int ans=0,l=2;
       for(int i=0;i<n;i++)
       {
        for(int j=i+1;j<n;j++)
        {
            int f=arr[i];
            int s=arr[j];
            while(dp.find(f+s)!=dp.end())
            {
                int temp=f+s;
                f=s;
                s=temp;
                l++;
            }
            ans=max(ans,l);
            l=2;
        }
       }
       return ans==2?0:ans;
    }
};