class Solution {
  public:
    int middle(int a, int b, int c) {
        // code here
        vector<int>vec{a,b,c};
        sort(vec.begin(),vec.end());
        return vec[1];
    }
};