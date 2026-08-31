class Solution {
public:
    bool formatArray(vector<int> &arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());

        // Pair the first half with the second half
        int half = n / 2;
        for (int i = 0; i < half; i++) {
            if (arr[i + (n + 1) / 2] <= arr[i]) {
                return false;
            }
        }

        return true;
    }
};