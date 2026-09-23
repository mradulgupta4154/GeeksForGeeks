class Solution {
  private:
    int mergeAndCount(vector<int> &arr, int left, int mid, int right) {
        vector<int> temp;
        int i = left;      // Starting index for left subarray
        int j = mid + 1;   // Starting index for right subarray
        int count = 0;

        while (i <= mid && j <= right) {
            if (arr[i] <= arr[j]) {
                temp.push_back(arr[i]);
                i++;
            } else {
                temp.push_back(arr[j]);
                // If arr[i] > arr[j], then all elements from arr[i] 
                // to arr[mid] are also greater than arr[j].
                count += (mid - i + 1);
                j++;
            }
        }

        // Copy remaining elements of left subarray
        while (i <= mid) {
            temp.push_back(arr[i]);
            i++;
        }

        // Copy remaining elements of right subarray
        while (j <= right) {
            temp.push_back(arr[j]);
            j++;
        }

        // Copy the sorted elements back into original array
        for (int k = left; k <= right; k++) {
            arr[k] = temp[k - left];
        }

        return count;
    }

    int mergeSortAndCount(vector<int> &arr, int left, int right) {
        int count = 0;
        if (left < right) {
            int mid = left + (right - left) / 2;

            // Total inversions = left half + right half + split inversions
            count += mergeSortAndCount(arr, left, mid);
            count += mergeSortAndCount(arr, mid + 1, right);
            count += mergeAndCount(arr, left, mid, right);
        }
        return count;
    }

  public:
    int inversionCount(vector<int> &arr) {
        return mergeSortAndCount(arr, 0, arr.size() - 1);
    }
};
