class Solution {
  public:
    vector<int> update(int n, vector<int>& updates) {
        vector<int> arr(n, 0);

        // Mark the starting point of each range update
        for (int x : updates) {
            arr[x - 1]++;
        }

        // Compute prefix sums to propagate the additions forward
        for (int i = 1; i < n; i++) {
            arr[i] += arr[i - 1];
        }

        return arr;
    }
};