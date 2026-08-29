class Solution {
  public:
    void swapElements(vector<int> &arr) {
        int n = arr.size();
        for (int i = 0; i < n - 2; i++) {
            swap(arr[i], arr[i + 2]);
        }
    }
};