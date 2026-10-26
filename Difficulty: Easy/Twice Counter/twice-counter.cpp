class Solution {
  public:
    int countWords(vector<string> &list) {
        // code here.
        unordered_map<string ,int>m;
        for(string c:list){
            m[c]++;
        }
        int c=0;
        for(auto&[num,count]:m){
            if(count==2) c++;
        }
        return c;
    }
};