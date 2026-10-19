class Solution {
  public:

    string firstAlphabet(string &s) {
        // code here
        string c="";
        c+=s[0];
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                c+=s[i+1];
            }
        }
        return c;
    }
};