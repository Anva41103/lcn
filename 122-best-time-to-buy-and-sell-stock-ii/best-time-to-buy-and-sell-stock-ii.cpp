// class Solution {
// public:
// int help(vector <int> p, int ind, vector <int>& dp, int f, int pr)
// {
//     if(ind==p.size()) return pr;
//     if(dp[ind]!-1) return dp[ind];
//     int nt=INT_MIN,t=INT_MIN;
//     if(f>0)
//     {
//         t=p
//     }

// }
//     int maxProfit(vector<int>& prices) {
        
//     }
// };
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int  n = prices.size();
        int maxi = 0,profit=0;
        int buy=prices[0];
        for(int i=0;i<n;i++){
            if(prices[i]<buy){
                buy=prices[i];
            }
            else{
                profit=prices[i]-buy;
                buy=prices[i];
                maxi+=profit;
            }
        }
        return maxi;
    }
};