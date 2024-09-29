class Solution {
public:
    long long maximumTotalSum(vector<int>& maxh) {
        sort(maxh.begin(),maxh.end(),greater <int>());
        long long sum=0;
        int last=INT_MAX;
        for (int num : maxh) {
            if(min(num, last-1)<=0) return -1;
            sum+=min(num, last-1);
            last=min(num, last-1);
        }
        return sum;
    }
};