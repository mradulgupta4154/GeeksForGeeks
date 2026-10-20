class Solution {
  public:
    string modify(string& s) {
        // code here
        if(s[0]>='a' and s[0]<='z'){
            for(int i=0;i<s.length();i++){
                s[i]=tolower(s[i]);
            }
        }
        else{
            for(int i=0;i<s.length();i++){
                s[i]=toupper(s[i]);
            }
        }
        return s;
    }
};