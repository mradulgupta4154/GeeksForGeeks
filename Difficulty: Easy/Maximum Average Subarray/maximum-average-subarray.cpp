class Solution {
public:
    int findMaxAverage(vector<int>& arr, int k) {
        int n = arr.size();

        // Calculate sum of the first window
        int current_sum = 0;
        for (int i = 0; i < k; i++) {
            current_sum += arr[i];
        }

        int max_sum = current_sum;
        int max_idx = 0;

        // Slide the window across the rest of the array
        for (int i = k; i < n; i++) {
            current_sum += arr[i] - arr[i - k];

            // Strictly greater ensures we keep the smallest starting index on ties
            if (current_sum > max_sum) {
                max_sum = current_sum;
                max_idx = i - k + 1;
            }
        }

        return max_idx;
    }
};