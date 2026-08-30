class Solution {
  public:
    bool checkSorted(vector<int> &arr) {
        int n = arr.size();
        int swaps = 0;

        for (int i = 0; i < n; i++) {
            while (arr[i] != i + 1) {
                swap(arr[i], arr[arr[i] - 1]);
                swaps++;
                if (swaps > 2) {
                    return false;
                }
            }
        }
        return (swaps == 0 || swaps == 2);
    }
};