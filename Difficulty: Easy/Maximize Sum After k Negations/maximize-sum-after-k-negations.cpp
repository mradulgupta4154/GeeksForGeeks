class Solution {
  public:
    int maximizeSum(vector<int>& arr, int k) {
        sort(arr.begin(), arr.end());

        // Step 1: Flip negative numbers to positive
        for (int i = 0; i < arr.size() && k > 0; i++) {
            if (arr[i] < 0) {
                arr[i] = -arr[i];
                k--;
            }
        }

        // Step 2: Calculate total sum and find the minimum element
        int sum = 0;
        int min_val = INT_MAX;

        for (int x : arr) {
            sum += x;
            min_val = min(min_val, x);
        }

        // Step 3: If k is odd, flip the smallest element once
        if (k % 2 != 0) {
            sum -= 2 * min_val;
        }

        return sum;
    }
};