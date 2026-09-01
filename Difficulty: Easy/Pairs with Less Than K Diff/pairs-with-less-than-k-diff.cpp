class Solution {
  public:
    int countPairs(vector<int>& arr, int k) {
        int n = arr.size();
        sort(arr.begin(), arr.end());

        int count = 0;
        int i = 0;

        for (int j = 0; j < n; j++) {
            while (arr[j] - arr[i] >= k) {
                i++;
            }
            count += (j - i);
        }

        return count;
    }
};