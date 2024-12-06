class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        int s=0,c=0,ans=0;;
        for(int i=1;i<=n;i++)
        {
            if(find(banned.begin(),banned.end(),i)!=banned.end()) continue;
            s+=i;
            if(s<=maxSum) {c++; ans=c;}
            else break;
        }
        return ans;
    }
};