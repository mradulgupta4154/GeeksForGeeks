class Solution {
  public:
    vector<int> nextGreatest(vector<int>& arr) {
        int n = arr.size();
        int maxSoFar = -1;

        for (int i = n - 1; i >= 0; i--) {
            int current = arr[i];
            arr[i] = maxSoFar;
            maxSoFar = max(maxSoFar, current);
        }

        return arr;
    }
};