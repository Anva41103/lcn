class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int b=0, e=arr.size()-1, m=0;
        while(b<=e)
        {
            m=(b+e)/2;
            int mis=arr[m]-m-1;
            if(mis<k) b=m+1;
            else e=m-1;
        }
        return k+b;
    }
};