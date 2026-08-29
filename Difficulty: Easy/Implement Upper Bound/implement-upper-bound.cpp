class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        int low = 0;
        int high = arr.size() - 1;
        int ans = arr.size(); // Default to array length if no element is > target

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] > target) {
                ans = mid;      // Found a candidate, try to find a smaller index on the left
                high = mid - 1;
            } else {
                low = mid + 1;  // arr[mid] <= target, look in the right half
            }
        }

        return ans;
    }
};