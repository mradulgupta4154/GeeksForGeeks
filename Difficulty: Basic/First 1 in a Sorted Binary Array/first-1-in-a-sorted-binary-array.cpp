class Solution {
  public:
    int firstIndex(vector<int> &arr) {
        int low = 0, high = arr.size() - 1;
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == 1) {
                ans = mid;     // Record current index
                high = mid - 1; // Look for an earlier 1 on the left
            } else {
                low = mid + 1;  // Look on the right side
            }
        }

        return ans;
    }
};