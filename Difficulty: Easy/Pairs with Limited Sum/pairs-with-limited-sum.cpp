class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        sort(arr.begin(), arr.end());

        int i = 0, j = arr.size() - 1;
        int count = 0;

        while (i < j) {
            if (arr[i] + arr[j] < target) {
                // arr[i] pairs with every element from i+1 to j
                count += j - i;
                i++;
            } else {
                j--;
            }
        }

        return count;
    }
};