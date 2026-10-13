class Solution {
  public:
    vector<int> sortedMerge(vector<int>& a, vector<int>& b) {
        // code here
        a.insert(a.end(),b.begin(),b.end());
        sort(a.begin(),a.end());
        return a;
    }
};
