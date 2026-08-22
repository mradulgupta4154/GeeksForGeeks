class Solution {
  public:
    int convertFive(int n) {
        // code here
        string c=to_string(n);
        for(int i=0;i<c.length();i++){
            if(c[i]=='0') c[i]='5';
        }
        return std::stoi(c);
    }
};