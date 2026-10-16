class Solution {
  public:
    vector<int> mergeThree(vector<int>& a, vector<int>& b, vector<int>& c) {
        //  code here
        a.insert(a.end(),b.begin(),b.end());
        a.insert(a.end(),c.begin(),c.end());
        sort(a.begin(),a.end());
        return a;
    }
};