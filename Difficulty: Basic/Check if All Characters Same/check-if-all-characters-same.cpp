class Solution {
  public:
    bool allCharactersSame(string &s) {
        // code here
        bool is=true;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]!=s[i+1]){
                is=false;
                break;
            }
            
            
        }
        return is;
    }
};