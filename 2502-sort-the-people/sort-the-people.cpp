class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) 
    {
        vector <int> ind(names.size());
        for(int i=0;i<names.size();i++)
        {
            ind[i]=i;
        }
        sort(ind.begin(),ind.end(), [&heights](int a,int b){return heights[a]>heights[b];});
        vector <string> k;
        for(int i=0;i<names.size();i++)
        {
            k.push_back(names[ind[i]]);
        }
        return k;
    }
};