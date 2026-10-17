class Solution {
  public:
    string toLower(string& s) {
        // code here
        string a="";
        for(int i=0;i<s.length();i++){
            a+=tolower(s[i]);
        }
        return a;
    }
};