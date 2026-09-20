class Solution {
  public:
    vector<int> intersection(vector<int>& arr1, vector<int>& arr2) {
        vector<int> res;
        int i = 0, j = 0;
        int n = arr1.size();
        int m = arr2.size();

        while (i < n && j < m) {
            // Skip duplicate elements in arr1
            if (i > 0 && arr1[i] == arr1[i - 1]) {
                i++;
                continue;
            }

            if (arr1[i] < arr2[j]) {
                i++;
            } else if (arr2[j] < arr1[i]) {
                j++;
            } else {
                // Found common element
                res.push_back(arr1[i]);
                i++;
                j++;
            }
        }

        return res;
    }
};