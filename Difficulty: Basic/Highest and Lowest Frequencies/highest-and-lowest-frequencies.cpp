class Solution {
  public:
    int findDiff(vector<int>& arr) {
        // code here
        unordered_map<int,int>m;
        for(int c:arr){
            m[c]++;
        }
        int a=INT_MIN;
        int b=INT_MAX;
        for(auto&[num,count]:m){
            a=max(a,count);
            b=min(b,count);
        }
        if(a==INT_MIN or b==INT_MAX) return 0;
        return a-b;
    }
};