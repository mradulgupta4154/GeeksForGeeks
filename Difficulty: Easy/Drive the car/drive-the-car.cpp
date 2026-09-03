class Solution {
    public:
      int required(vector<int>& arr, int k) {
          int max_val = 0;
          for (int distance : arr) {
              max_val = max(max_val, distance);
          }

          if (max_val > k) {
              return max_val - k;
          }
          return -1;
      }
  };