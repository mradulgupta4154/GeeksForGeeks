class Solution {
  public:
    vector<int> topKIndices(vector<int> &arr, int k) {
        int n = arr.size();

        vector<int> idx(n);
        for (int i = 0; i < n; i++) idx[i] = i;

        // marks descending; stable_sort keeps smaller index first on ties
        stable_sort(idx.begin(), idx.end(), [&](int x, int y) {
            return arr[x] > arr[y];
        });

        vector<int> res;
        int distinct = 0;

        for (int i = 0; i < n; i++) {
            // new marks value starts a new distinct group
            if (i == 0 || arr[idx[i]] != arr[idx[i - 1]]) {
                distinct++;
            }
            if (distinct > k) break;
            res.push_back(idx[i]);
        }

        return res;
    }
};