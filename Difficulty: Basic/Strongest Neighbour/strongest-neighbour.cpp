class Solution {
  public:
    vector<int> maxAdj(vector<int> &arr) {
        vector<int> result;
        int n = arr.size();

        for (int i = 0; i < n - 1; i++) {
            result.push_back(max(arr[i], arr[i + 1]));
        }

        return result;
    }
};