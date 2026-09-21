class Solution {
  public:
    vector<int> remDuplicate(vector<int>& arr) {
        // code here
        unordered_set<int>s{arr.begin(),arr.end()};
        vector<int>vec{s.begin(),s.end()};
        return vec;
    }
};