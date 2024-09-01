class Solution {
public:
    bool joke(int a, int b)
    {
        return (a%2==b%2);
    }
    bool checkTwoChessboards(string c1, string c2) {
        int a=c1[0]-'a';
        int b=c1[1]-'0';
         int c=c2[0]-'a';
        int d=c2[1]-'0';
        return (!(joke(a,b)^joke(c,d)));
    }
};