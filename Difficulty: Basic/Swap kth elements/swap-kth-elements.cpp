
class Solution {
  public:
    void swapKth(vector<int> &arr, int k) {
        // code here
        swap(arr[k-1],arr[arr.size()-k]);
    }
};
