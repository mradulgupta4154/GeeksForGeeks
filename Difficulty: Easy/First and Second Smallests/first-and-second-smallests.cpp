class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        // code here
        set<int>s(arr.begin(),arr.end());
        sort(arr.begin(),arr.end());
        if(s.size()<2) return {-1};
        vector<int>vec(s.begin(),s.end());
        return {vec[0],vec[1]};
    }
};