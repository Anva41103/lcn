class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int rows=rowSum.size();
        int cols=colSum.size();
        vector <vector<int>> restoredmat(rows, vector <int>(cols,0));
        int rowptr=0, colptr=0;
        while(rowptr<rows&&colptr<cols)
        {
            int val=min(rowSum[rowptr],colSum[colptr]);
            restoredmat[rowptr][colptr]=val;
            rowSum[rowptr]-=val;
            colSum[colptr]-=val;
            if(rowSum[rowptr]==0) rowptr++;
            if(colSum[colptr]==0)colptr++;
        }
        return restoredmat;
    }
};