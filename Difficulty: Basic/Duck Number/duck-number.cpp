class Solution {
  public:
    bool checkDuck(string &s) {
        // code here
        int c=0;
        if(s[0]=='0') return false;
        for(int i=1;i<s.length();i++){
            if(s[i]=='0') c++;
        }
        return (c>=1);
    }
};