class Solution {
  public:
    int redOrGreen(string &s) {
        // code here
       int r=0,g=0;
       for(int i=0;i<s.length();i++){
           if(s[i]=='R') r++;
           else g++;
       }
       return min(r,g);
    }
};