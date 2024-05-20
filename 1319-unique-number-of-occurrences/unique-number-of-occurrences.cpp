class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>umap;
         vector<int>v(1001,0);
         int ans{0};
         for(int &i:arr){
             ++umap[i];
         }
         for(auto &[f,s]:umap){
             ++v[s];
         }
         for(int i=0;i<1001;i++){
             if(v[i]>1){
                 return false;
             }
         }
         return true;
    }
};