class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();
        int repeating = -1;
        int missing = -1;

        for (int i = 0; i < n; i++) {
            int val = abs(arr[i]);
            if (arr[val - 1] < 0) {
                repeating = val;
            } else {
                arr[val - 1] = -arr[val - 1];
            }
        }

        for (int i = 0; i < n; i++) {
            if (arr[i] > 0) {
                missing = i + 1;
                break;
            }
        }

        return {repeating, missing};
    }
};