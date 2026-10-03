class Solution {
  public:
    int single(vector<int>& arr) {
        // code here
        unordered_map<int,int>m;
        for(int c: arr){
            m[c]++;
        }
        int a=1;
        for(auto&[num,count]:m){
            if(count==1){
                a=num;
            }
        }
        return a;
    }
};