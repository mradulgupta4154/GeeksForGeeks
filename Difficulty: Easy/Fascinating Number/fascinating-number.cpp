class Solution {
  public:
    bool fascinating(int n) {
        // code here
        bool is=true;
        string c=to_string(n);
        c+=to_string(n*2);
        c+=to_string(n*3);
        if(c.length()!=9) return false;
        for(int i=1;i<=9;i++){
            if(find(c.begin(),c.end(),i+'0')==c.end()){
                is=false;
                break;
            }
        }
        return is;
    }
};