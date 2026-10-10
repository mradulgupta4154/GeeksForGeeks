class Solution {
  public:
    int countTriangles(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());

        int count = 0;

        // fix arr[k] as the largest side
        for (int k = n - 1; k >= 2; k--) {
            int i = 0, j = k - 1;

            while (i < j) {
                if (arr[i] + arr[j] > arr[k]) {
                    // every element from i to j-1 pairs with j
                    count += j - i;
                    j--;
                } else {
                    i++;
                }
            }
        }

        return count;
    }
};