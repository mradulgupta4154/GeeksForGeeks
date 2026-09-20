class Solution {
  public:
    int countZeroes(vector<int>& arr) {
        int n = arr.size();
        int low = 0, high = n - 1;
        int firstZeroIndex = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == 0) {
                firstZeroIndex = mid;
                high = mid - 1; // Keep searching left for the FIRST zero
            } else {
                low = mid + 1;  // Zeroes are to the right
            }
        }

        // If no 0 was found, return 0; otherwise, subtract first index from total size
        return (firstZeroIndex == -1) ? 0 : (n - firstZeroIndex);
    }
};