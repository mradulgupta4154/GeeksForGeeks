class Solution {
  public:
    void rearrange(vector<int>& arr) {
        int n = arr.size();
        if (n <= 1) return;

        // 1. Unsorted input ke liye pehle sort karein
        sort(arr.begin(), arr.end());

        int min_idx = 0;
        int max_idx = n - 1;

        // 2. Entire array ka max element nikal kar +1 karein
        long long max_elem = arr[max_idx] + 1;

        for (int i = 0; i < n; i++) {
            // Even index: Next maximum element
            if (i % 2 == 0) {
                arr[i] += (arr[max_idx] % max_elem) * max_elem;
                max_idx--;
            } 
            // Odd index: Next minimum element
            else {
                arr[i] += (arr[min_idx] % max_elem) * max_elem;
                min_idx++;
            }
        }

        // 3. Decoding step
        for (int i = 0; i < n; i++) {
            arr[i] /= max_elem;
        }
    }
};