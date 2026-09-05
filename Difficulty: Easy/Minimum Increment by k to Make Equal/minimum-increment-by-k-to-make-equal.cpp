class Solution {
public:
    int minOps(vector<int>& arr, int k) {
        int max_val = *max_element(arr.begin(), arr.end());
        int total_ops = 0;

        for (int num : arr) {
            int diff = max_val - num;

            // If the difference cannot be evenly divided by k, return -1
            if (diff % k != 0) {
                return -1;
            }

            total_ops += diff / k;
        }

        return total_ops;
    }
};