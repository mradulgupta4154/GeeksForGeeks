class Solution {
  public:
    long long printMinimumProduct(vector<int> &arr) {
        // code here
        sort(arr.begin(),arr.end());
        return arr[0]*arr[1];
    }
};