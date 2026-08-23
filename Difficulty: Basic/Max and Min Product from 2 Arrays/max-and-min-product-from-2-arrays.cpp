class Solution {
  public:
    int minMaxProduct(vector<int> &arr1, vector<int> &arr2) {
        // code here
        int c=*max_element(arr1.begin(),arr1.end());
        int d=*min_element(arr2.begin(),arr2.end());
        return c*d;
    }
};