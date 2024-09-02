class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long s=0;
        for(auto it: chalk)
        {
            s+=it;
        }
        k%=s;
        for(int i=0;i<chalk.size();i++)
        {
            if(k<chalk[i]) return i;
            k-=chalk[i];
        }
        return 5;
    }
};