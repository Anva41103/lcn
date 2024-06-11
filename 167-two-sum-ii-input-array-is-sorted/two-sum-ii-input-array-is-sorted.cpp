class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) {
        int i=0,j= n.size()-1;
        vector <int> v;
        while(i<j)
        {
            if(n[i]+n[j]==target) { v.push_back(i+1); v.push_back(j+1);}
            if(n[i]+n[j]>target) j--;
            else i++;
        }
        return v;
    }
};