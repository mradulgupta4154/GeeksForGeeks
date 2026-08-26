class Solution {
  public:
    int countElements(vector<int>& arr) {
        int count = 0;
        long long maxSoFar = LLONG_MIN;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > maxSoFar) {
                count++;
                maxSoFar = arr[i];
            }
        }
        return count;
    }
};