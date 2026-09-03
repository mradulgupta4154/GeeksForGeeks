class Solution {
  public:
      int countNumbers(int n) {
          string s = to_string(n);
          int d = s.length();
          int count = 0;

          // 1. Count valid numbers with length less than d
          int power = 5;
          for (int k = 1; k < d; ++k) {
              count += power;
              power *= 5;
          }

          // Precompute powers of 5 up to length d
          vector<int> p5(d + 1, 1);
          for (int i = 1; i <= d; ++i) {
              p5[i] = p5[i - 1] * 5;
          }

          // 2. Count valid numbers of the same length d
          for (int i = 0; i < d; ++i) {
              int digit = s[i] - '0';

              // Count valid digits {1, 2, 3, 4, 5} that are strictly smaller than the current digit
              int smaller_choices = 0;
              for (int val = 1; val <= 5; ++val) {
                  if (val < digit) {
                      smaller_choices++;
                  }
              }

              count += smaller_choices * p5[d - 1 - i];

              // If current digit is not in {1, 2, 3, 4, 5}, stop matching digits
              if (digit < 1 || digit > 5) {
                  return count;
              }
          }

          // Include n itself if all its digits are in {1, 2, 3, 4, 5}
          return count + 1;
      }
  };