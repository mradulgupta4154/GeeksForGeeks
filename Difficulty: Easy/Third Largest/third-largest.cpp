class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        // code here
        sort(arr.rbegin(),arr.rend());
        if(arr.size()<3) return -1;
        return arr[2];
    }
};