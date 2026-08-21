class Solution {
    public:
      vector<int> leaders(vector<int>& arr) {
          vector<int> vec;
          int n = arr.size();

          int max_from_right = arr[n - 1];
          vec.push_back(max_from_right);

          // Traverse from right to left
          for (int i = n - 2; i >= 0; i--) {
              if (arr[i] >= max_from_right) {
                  max_from_right = arr[i];
                  vec.push_back(arr[i]);
              }
          }

          // Reverse to restore original left-to-right order
          reverse(vec.begin(), vec.end());

          return vec;
      }
  };