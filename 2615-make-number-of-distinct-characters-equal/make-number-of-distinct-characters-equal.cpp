class Solution {
public:
    int check(vector<int>&v){
        int res=0;
        
        for(int i=0;i<26;i++){
            if(v[i]>0)
                res++;
        }
        return res;
    }
    bool isItPossible(string word1, string word2) {
     
            vector<int>mpa(26,0);
            vector<int>mpb(26,0);
           
            for(int i=0;i<max(word1.size(),word2.size());i++){
                if(i<word1.size())
                    mpa[word1[i]-'a']++;
                if(i<word2.size())
                    mpb[word2[i]-'a']++;
            }
        
        for(int i=0;i<26;i++){
            for(int j=0;j<26;j++){
                if(mpa[i]>0 && mpb[j]>0){
                    mpa[i]-=1;
                    mpb[i]+=1;
                    mpb[j]-=1;
                    mpa[j]+=1;
                    if(check(mpa) == check(mpb))
                        return true;
                    mpa[i]+=1;
                    mpb[i]-=1;
                    mpb[j]+=1;
                    mpa[j]-=1;
                }
            }
        }       
        return false;
    }
};