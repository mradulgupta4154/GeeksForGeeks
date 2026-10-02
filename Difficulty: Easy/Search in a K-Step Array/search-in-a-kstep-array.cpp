class Solution {
  public:
    int findStepKeyIndex(vector<int>& arr, int k, int x) {
        int i = 0;
        int n = arr.size();

        while (i < n) {
            // Found the element
            if (arr[i] == x) {
                return i;
            }

            // Jump by max(1, abs(arr[i] - x) / k)
            int step = max(1, abs(arr[i] - x) / k);
            i += step;
        }

        return -1;
    }
};