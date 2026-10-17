class Solution {
  public:
    string removeSpaces(string& s) {
        // code here
        string a="";
        for(int i=0;i<s.length();i++){
            if(s[i]==' ') continue;
            a+=s[i];
        }
        return a;
    }
};