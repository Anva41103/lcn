class Solution {
public:
static bool comp(vector<int> a, vector <int> b, int k)
{
    return a[k]>b[k];
}
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
           sort(score.begin(), score.end(), [k](vector<int>& a, vector<int>& b) {
            return a[k] > b[k];
        });
        return score;
    }
};