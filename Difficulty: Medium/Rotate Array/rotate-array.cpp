class Solution {
  public:
    void rotateArr(vector<int>& arr, int d) {
        int n = arr.size();

        // Handle d >= n
        d = d % n;
        if (d == 0) return;

        // Step 1: Reverse first d elements
        reverse(arr.begin(), arr.begin() + d);

        // Step 2: Reverse remaining n - d elements
        reverse(arr.begin() + d, arr.end());

        // Step 3: Reverse the whole array
        reverse(arr.begin(), arr.end());
    }
};