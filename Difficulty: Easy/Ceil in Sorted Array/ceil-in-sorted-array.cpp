class Solution {
  public:
    int findCeil(vector<int>& arr, int x) {
        int low = 0;
        int high = arr.size() - 1;
        int ans = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] >= x) {
                ans = mid;        // Potential ceil found, try to find a smaller index to the left
                high = mid - 1;
            } else {
                low = mid + 1;    // Elements on the left are too small
            }
        }

        return ans;
    }
};