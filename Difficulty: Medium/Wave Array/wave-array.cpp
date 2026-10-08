class Solution {
  public:
    void sortInWave(vector<int>& arr) {
        // arr is already sorted ascending -> just swap adjacent pairs
        for (int i = 0; i + 1 < (int)arr.size(); i += 2) {
            swap(arr[i], arr[i + 1]);
        }
    }
};