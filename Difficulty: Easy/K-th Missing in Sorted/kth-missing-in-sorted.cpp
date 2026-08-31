class Solution {
public:
    int KthMissingElement(vector<int>& arr, int& k) {
        int n = arr.size();
        int low = 0, high = n - 1;

        // Total missing numbers within the bounds of the array
        int totalMissing = (arr[n - 1] - arr[0]) - (n - 1);
        if (k > totalMissing) return -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int missing = (arr[mid] - arr[0]) - mid;

            if (missing < k) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        // Output the kth missing value starting from arr[0]
        return arr[high] + (k - ((arr[high] - arr[0]) - high));
    }
};