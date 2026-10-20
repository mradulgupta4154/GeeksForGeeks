class Solution {
  public:
    string toUpper(string& s) {
        // code here
        for(int i=0;i<s.length();i++){
            s[i]=toupper(s[i]);
        }
        return s;
    }
};