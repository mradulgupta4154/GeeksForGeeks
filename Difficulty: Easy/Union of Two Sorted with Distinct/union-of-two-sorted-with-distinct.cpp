class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        a.insert(a.end(),b.begin(),b.end());
        set<int>s(a.begin(),a.end());
        vector<int>vec(s.begin(),s.end());
        return vec;
    }
};