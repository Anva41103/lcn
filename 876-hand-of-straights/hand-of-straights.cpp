class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int g) {
        int h= hand.size();
        if(h%g!=0) return false;
        sort(hand.begin(),hand.end());
        int i=0,j=0;
        vector <int> v;
        map <int,int> m;
        for(auto it:hand) m[it]++;
        while(!m.empty())
        {
            int p=m.begin()->first;
            for(int i=0;i<g;i++)
            {
                if(m[p+i]==0) return false;
                if(--m[p+i]==0) m.erase(p+i);
            }
        }
         return true;
    }
};