class Solution {
public:
    int hIndex(vector<int>& v) {
        sort(v.begin(), v.end(), greater<int>());
        int i;
        for(i = 0;i< v.size();i++){
            if(v[i] < i+1){
                break;
            }
        }
        return i;
    }
};