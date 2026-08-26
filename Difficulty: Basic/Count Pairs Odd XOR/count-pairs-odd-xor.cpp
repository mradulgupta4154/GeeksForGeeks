class Solution {
  public:
    int countXorPair(vector<int>& arr) {
        long long odd_count = 0;
        long long even_count = 0;

        for (int num : arr) {
            if (num % 2 != 0) {
                odd_count++;
            } else {
                even_count++;
            }
        }

        return odd_count * even_count;
    }
};