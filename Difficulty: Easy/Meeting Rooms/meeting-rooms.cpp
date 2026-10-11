class Solution {
  public:
    bool canAttend(vector<vector<int>> &arr) {
        // sort by start time
        sort(arr.begin(), arr.end());

        for (int i = 1; i < arr.size(); i++) {
            // current start < previous end means overlap
            if (arr[i][0] < arr[i - 1][1]) {
                return false;
            }
        }

        return true;
    }
};