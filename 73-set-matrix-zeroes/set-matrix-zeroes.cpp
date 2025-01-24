class Solution {
public:
void c(vector <vector<int>> &m,int x,int r)
{
    for(int i=0;i<r;i++) m[i][x]=0;
}
void r(vector <vector<int>> &m,int x,int c)
{
    for(int i=0;i<c;i++) m[x][i]=0;
}
void setZeroes(vector<vector<int>>& matrix) 
{
    int m= matrix.size();
    int n= matrix[0].size();
    set <int> sa,sb;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(matrix[i][j]==0) {sa.insert(i); sb.insert(j);}
        }
    }      
    for(auto it:sa)
    {
        r(matrix,it,n);
    }
     for(auto it:sb)
    {
        c(matrix,it,m);
    }
}
};