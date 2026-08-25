class Solution {
  public:
    int maxTripletSum(vector<int> &arr) {
        // Code Here
        sort(arr.rbegin(),arr.rend());
        return arr[0]+arr[1]+arr[2];
    }
};