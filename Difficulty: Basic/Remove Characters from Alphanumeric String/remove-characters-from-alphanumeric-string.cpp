class Solution {
  public:
    string removeCharacters(string &s) {
        // code here
        string c="";
        for(int i=0;i<s.length();i++){
            if(s[i]>='0' and s[i]<='9'){
                c+=s[i];
            }
        }
        return c;
    }
};