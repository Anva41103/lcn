class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int, int> mp, cs; 
        unordered_set<int> st; 
        vector<int> ans;
        for (auto& it : queries) 
        {
            int b = it[0];
            int c = it[1];
            if (mp.find(b) != mp.end()) 
            {
                int oc = mp[b];
                if (oc != c) {
                    mp[b] = c;
                    cs[c]++;
                    if (st.find(oc) != st.end()) {
                        cs[oc]--;
                        if (cs[oc] == 0) {
                            st.erase(oc);
                        }
                    }
                    st.insert(c);
                }
            } 
            else 
            {
                mp[b] = c;
                st.insert(c);
                cs[c]++;
            }
            ans.push_back(st.size());
        }
        return ans;

    }
};