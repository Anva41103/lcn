class Solution {
public:
    bool makeStringsEqual(string s, string target) {
        int f=0;
      for(auto it: s)
      {
        if(it!='0') f=1;
      } 
      int k=0;
      for(auto it: target)
      {
        if(it!='0') k=1;
      } 
      if(!f&&k||f&&!k) return false; 
    return true;
}
};