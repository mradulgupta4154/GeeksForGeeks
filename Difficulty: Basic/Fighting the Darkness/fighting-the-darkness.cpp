class Solution {
  public:
    int maxDays(vector<int> &arr) {
        // code here
        int c=*max_element(arr.begin(),arr.end());
        return c;
    }
};