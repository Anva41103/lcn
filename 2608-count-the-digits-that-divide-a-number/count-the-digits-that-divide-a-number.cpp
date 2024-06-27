class Solution {
public:
    int countDigits(int num) {
        int d=0;
        string k= to_string(num);
        for(auto it:k)
        {
            int p= it-'0';
            if(num%p==0) d++;
        }
        return d;
    }
};