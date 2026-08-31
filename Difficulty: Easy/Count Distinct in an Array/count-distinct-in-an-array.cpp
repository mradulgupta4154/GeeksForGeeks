class Solution {
  public:
    int countDistinct(vector<int>& arr) {
        // code here
        set<int>s(arr.begin(),arr.end());
        return s.size();
    }
};