class Solution {
  public:
    int findMaxProduct(vector<int>& arr, int k) {
        int n = arr.size();
        if (n < k) return 0;

        long long current_product = 1;
        for (int i = 0; i < k; i++) {
            current_product *= arr[i];
        }

        long long max_product = current_product;

        for (int i = k; i < n; i++) {
            current_product = (current_product / arr[i - k]) * arr[i];
            max_product = max(max_product, current_product);
        }

        return max_product;
    }
};