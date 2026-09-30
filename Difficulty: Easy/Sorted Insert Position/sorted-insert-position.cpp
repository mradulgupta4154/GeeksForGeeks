class Solution {
public:
    int searchInsertK(vector<int>& arr, int k) {
        int low = 0;
        int high = arr.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == k) {
                return mid; // Element found
            } else if (arr[mid] < k) {
                low = mid + 1; // Search right half
            } else {
                high = mid - 1; // Search left half
            }
        }

        // If not found, 'low' points to the correct insert position
        return low;
    }
};