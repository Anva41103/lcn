class Solution {
public:
    int possible(vector<int> &boards, int all) {
        int n = 1;
        int sum = 0;
        int maxSum = 0; 
        for (auto it : boards) {
            if (sum + it <= all) {
                sum += it;
            } else {
                sum = it;
                n++;  
            }
        }
        return n; 
    }
    int splitArray(vector<int>& boards, int k) {
        int low = *max_element(boards.begin(), boards.end());
        int high = accumulate(boards.begin(), boards.end(), 0);
        int ans = high;

        while (low <= high) {
            int mid = (low + high) / 2;
            int n = possible(boards, mid);

            if (n <= k) {
                ans = mid; 
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;  
    }
};
