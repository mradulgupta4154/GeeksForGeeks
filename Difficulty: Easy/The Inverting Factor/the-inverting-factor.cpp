class Solution {
  private:
      int reverseNum(int n) {
          int rev = 0;
          while (n > 0) {
              rev = rev * 10 + (n % 10);
              n /= 10;
          }
          return rev;
      }

  public:
      int minInvertingFactor(vector<int>& arr) {
          int n = arr.size();

          // Step 1: Reverse all numbers in the array
          for (int i = 0; i < n; i++) {
              arr[i] = reverseNum(arr[i]);
          }

          // Step 2: Sort the reversed numbers
          sort(arr.begin(), arr.end());

          // Step 3: Find the minimum adjacent difference
          int minDiff = INT_MAX;
          for (int i = 1; i < n; i++) {
              minDiff = min(minDiff, arr[i] - arr[i - 1]);
          }

          return minDiff;
      }
  };