class Solution {
  public:
    string delAlternate(string &s) {
        // code here
        string c="";
        for(int i=0;i<s.length();i+=2){
            c+=s[i];
        }
        return c;
    }
};