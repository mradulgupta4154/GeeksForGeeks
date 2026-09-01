class Solution {
  public:
    void interchange(vector<vector<int>>& mat) {
        // code here
        for(int j=0;j<mat.size();j++){
            swap(mat[j][0],mat[j][mat[0].size()-1]);
        }
    }
};