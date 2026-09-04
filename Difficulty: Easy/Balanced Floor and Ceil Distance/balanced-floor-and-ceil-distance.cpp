class Solution {
    public:
      bool isBalanced(vector<int>& arr, int x) {
          // Find the first element >= x (Ceil)
          auto it = lower_bound(arr.begin(), arr.end(), x);

          // If x is smaller than all elements, ceil exists but floor doesn't
          if (it == arr.begin() && *it > x) {
              return false;
          }

          // If x is greater than all elements, floor exists but ceil doesn't
          if (it == arr.end()) {
              return false;
          }

          int ceil_val = *it;
          int floor_val;

          // If element is found equal to x, floor and ceil are both x
          if (*it == x) {
              floor_val = x;
          } else {
              // Otherwise, floor is the element right before ceil
              floor_val = *(it - 1);
          }

          return abs(x - floor_val) == abs(ceil_val - x);
      }
  };