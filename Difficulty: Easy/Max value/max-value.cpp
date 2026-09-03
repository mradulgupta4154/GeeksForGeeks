class Solution {
  public:
    int maxVal(vector<int> &arr) {
        int max_diff = INT_MIN;
        int min_diff = INT_MAX;

        for (int i = 0; i < arr.size(); i++) {
            int current_diff = arr[i] - i;
            max_diff = max(max_diff, current_diff);
            min_diff = min(min_diff, current_diff);
        }

        return max_diff - min_diff;
    }
};