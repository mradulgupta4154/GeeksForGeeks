class Solution {
  public:
    string removeChars(string &s) {
        // code here
        string c="";
        for(int i=0;i<s.length();i++){
            if(s[i]>='a' and s[i]<='z'){
                c+=s[i];
            }
            else if(s[i]>='A' and s[i]<='Z'){
                c+=s[i];
            }
        }
        return c;
    }
};