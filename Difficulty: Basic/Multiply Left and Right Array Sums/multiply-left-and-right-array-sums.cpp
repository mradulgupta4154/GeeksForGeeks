class Solution {
  public:
    int multiply(vector<int> &arr) {
        int n = arr.size();
        int mid = n / 2;
        int leftSum = 0, rightSum = 0;

        for (int i = 0; i < mid; i++) {
            leftSum += arr[i];
        }

        for (int i = mid; i < n; i++) {
            rightSum += arr[i];
        }

        return leftSum * rightSum;
    }
};