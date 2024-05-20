class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums2) {
        int n= nums2.size();
        vector <int> ans(n,-1);
        stack <int> st;
        for(int i=2*n-1;i>=0;i--)
        {
            while(!st.empty()&&st.top()<=nums2[i%n]) st.pop();
            if(i<n)
            {
                if(!st.empty())  ans[i]=(st.top());
            }
            st.push(nums2[i%n]);
        }
        return ans;
    }
};