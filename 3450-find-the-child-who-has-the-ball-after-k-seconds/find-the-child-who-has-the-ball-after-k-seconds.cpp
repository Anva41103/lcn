class Solution {
public:
    int numberOfChild(int n, int k) 
    {
        vector <int> v;
        for(int i=0;i<n;i++)
        {
            v.push_back(i);
        }
        for(int i=n-2;i>0;i--) v.push_back(i);
        int l=n+n-2;
        // if(k<l)
        // return v[k];
        // else if(k==l)
        // {
        //     return v[1];
        // }
        // else
        return v[k%l];
    }
};