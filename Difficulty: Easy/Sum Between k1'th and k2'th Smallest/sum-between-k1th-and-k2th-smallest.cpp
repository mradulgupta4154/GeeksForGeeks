class Solution {
  public:
    int sumBetweenK1K2(vector<int>& arr, int k1, int k2) {
        // Step 1: Sort the array
        sort(arr.begin(), arr.end());

        // Step 2: Sum elements strictly between k1-th and k2-th smallest
        int sum = 0;
        for (int i = k1; i < k2 - 1; i++) {
            sum += arr[i];
        }

        return sum;
    }
};