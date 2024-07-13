class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) 
    {
        int n=positions.size();
        vector <int> index(n);
        for(int i=0;i<n;i++) index[i]=i;
        sort(index.begin(),index.end(),
        [&](int ind1, int ind2){ return positions[ind1]<positions[ind2]; });
        stack <int> st;
        for(auto curr:index)
        {
            if(directions[curr]=='R') st.push(curr);
            else
            {
                while(!st.empty()&& healths[curr] > 0)
                {
                    int topIndex = st.top();
                    st.pop();

                    // Top robot survives, current robot is destroyed
                    if (healths[topIndex] > healths[curr]) {
                        healths[topIndex] -= 1;
                        healths[curr] = 0;
                        st.push(topIndex);
                    } else if (healths[topIndex] < healths[curr]) {
                        // Current robot survives, top robot is destroyed
                        healths[curr] -= 1;
                        healths[topIndex] = 0;
                    } else {
                        // Both robots are destroyed
                        healths[curr] = 0;
                        healths[topIndex] = 0;
                    }
                }
            }
        }
        vector <int> roboleft;
            for (int ind = 0; ind < n; ++ind) {
            if (healths[ind] > 0) {
                roboleft.push_back(healths[ind]);
            }
        }
        return roboleft;
    }
};