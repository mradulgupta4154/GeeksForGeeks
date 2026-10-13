class Solution {
  public:
    vector<int> rearrangeArray(vector<int>& arr) {
        int n = arr.size();

        for (int j = 1; j < n; j++) {
            // 0-based j is odd  -> 1-based index is even -> need arr[j] >= arr[j-1]

            if (j % 2 == 1) {
                if (arr[j] < arr[j - 1]) {
                    swap(arr[j], arr[j - 1]);
                }
            }
            // 0-based j is even -> 1-based index is odd  -> need arr[j] <= arr[j-1]
            else {
                if (arr[j] > arr[j - 1]) {
                    swap(arr[j], arr[j - 1]);
                }
            }
        }

        return arr;
    }
};