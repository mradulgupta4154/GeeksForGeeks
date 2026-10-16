class Solution {
private:
    void merge(int left, int mid, int right, vector<pair<int, int>>& arr, vector<int>& res) {
            int i = left, j = mid + 1;
            vector<pair<int, int>> temp;
            int rightSmallerCount = 0;

            while (i <= mid && j <= right) {
                if (arr[i].first <= arr[j].first) {
                    res[arr[i].second] += rightSmallerCount;
                    temp.push_back(arr[i++]);
                } else {
                    rightSmallerCount++;
                    temp.push_back(arr[j++]);
                }
            }

            while (i <= mid) {
                res[arr[i].second] += rightSmallerCount;
                temp.push_back(arr[i++]);
            }

            while (j <= right) {
                temp.push_back(arr[j++]);
            }

            for (int k = left; k <= right; k++) {
                arr[k] = temp[k - left]; // Fixed: changed temp.k to temp[k - left]
            }
        }

    void mergeSort(int left, int right, vector<pair<int, int>>& arr, vector<int>& res) {
        if (left >= right) return;
        int mid = left + (right - left) / 2;
        mergeSort(left, mid, arr, res);
        mergeSort(mid + 1, right, arr, res);
        merge(left, mid, right, arr, res);
    }

public:
    vector<int> lowerArray(vector<int>& arr) {
        int n = arr.size();
        vector<pair<int, int>> indexedArr(n);
        for (int i = 0; i < n; i++) {
            indexedArr[i] = {arr[i], i};
        }

        vector<int> res(n, 0);
        mergeSort(0, n - 1, indexedArr, res);
        return res;
    }
};