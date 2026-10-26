class Solution {
  public:
    int lastIndex(string &s, char c) {
        // code here
        int a=-1;
        for(int i=0;i<s.length();i++){
            if(s[i]==c){
                a=i;
            }
        }
        return a;
    }
};