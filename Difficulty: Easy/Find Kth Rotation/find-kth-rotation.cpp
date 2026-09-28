class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        int low = 0, high = arr.size() - 1;
        int minIndex = 0;
        int minVal = INT_MAX;

        while (low <= high) {
            // If the search space is already sorted
            if (arr[low] <= arr[high]) {
                if (arr[low] < minVal) {
                    minVal = arr[low];
                    minIndex = low;
                }
                break;
            }

            int mid = low + (high - low) / 2;

            // If left half is sorted
            if (arr[low] <= arr[mid]) {
                if (arr[low] < minVal) {
                    minVal = arr[low];
                    minIndex = low;
                }
                // Search in right half
                low = mid + 1;
            } 
            // If right half is sorted
            else {
                if (arr[mid] < minVal) {
                    minVal = arr[mid];
                    minIndex = mid;
                }
                // Search in left half
                high = mid - 1;
            }
        }

        return minIndex;
    }
};