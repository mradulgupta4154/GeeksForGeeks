class Solution {
  public:
    int findMin(vector<int>& arr) {
        // code here
        sort(arr.begin(),arr.end());
        return arr[0];
    }
};