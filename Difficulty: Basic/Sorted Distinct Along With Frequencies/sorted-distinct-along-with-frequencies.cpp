class Solution {
  public:
    vector<vector<int>> freqSorted(vector<int>& arr) {
        // code here
        vector<vector<int>> vec;
        map<int,int>m;
        for(int c:arr){
            m[c]++;
        }
        for(auto&[n,c]:m){
            vec.push_back({n,c});
        }
        return vec;
    }
};