class Solution {
  public:
    int count(string& s) {
        // code here
        unordered_map<char,int>m;
        for(char c:s){
            m[c]++;
        }
        int k=0;
        for(auto&[num,count]:m){
            if(count%2==0){
                k++;
            }
        }
        return k;
    }
};