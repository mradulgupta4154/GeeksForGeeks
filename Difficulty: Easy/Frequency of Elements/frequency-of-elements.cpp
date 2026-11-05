class Solution {
  public:
    vector<vector<int>> countFreq(vector<int>& arr) {
        // code here
        unordered_map<int,int>m;
        for(int c:arr){
            m[c]++;
        }
        vector<vector<int>>vec;
        for(auto&[num,count]:m){
            vec.push_back({num,count});
        }
        return vec;
    }
};