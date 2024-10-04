class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        long long p=skill[0]+skill.back();
        long long s=skill[0]*skill.back();
        for(int i=1;i<skill.size()/2;i++)
        {
            if(skill[i]+skill[skill.size()-1-i]==p) s+=skill[i]*skill[skill.size()-1-i];
            else return -1;
        }
        return s;
    }
};