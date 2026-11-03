class Solution {
  public:
    bool isIsogram(string& s) {
        //  code here
        unordered_map<char,int>m;
        for(char c:s){
            m[c]++;
        }
        for(auto&[num,count]:m){
            if(count>1){
                return false;
                break;
            } 
            
        }
        return true;
    }
};