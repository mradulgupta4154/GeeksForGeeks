class Solution {
public:
    int minSum(vector<int>& arr1, vector<int>& arr2) {
        int n = arr1.size();

        int min1_1 = INT_MAX, min1_2 = INT_MAX, idx1 = -1;
        int min2_1 = INT_MAX, min2_2 = INT_MAX, idx2 = -1;

        // Find 1st & 2nd minimums for arr1
        for (int i = 0; i < n; i++) {
            if (arr1[i] < min1_1) {
                min1_2 = min1_1;
                min1_1 = arr1[i];
                idx1 = i;
            } else if (arr1[i] < min1_2) {
                min1_2 = arr1[i];
            }
        }

        // Find 1st & 2nd minimums for arr2
        for (int i = 0; i < n; i++) {
            if (arr2[i] < min2_1) {
                min2_2 = min2_1;
                min2_1 = arr2[i];
                idx2 = i;
            } else if (arr2[i] < min2_2) {
                min2_2 = arr2[i];
            }
        }

        // If smallest elements are at different indices
        if (idx1 != idx2) {
            return min1_1 + min2_1;
        }

        // If smallest elements are at the same index
        return min(min1_1 + min2_2, min1_2 + min2_1);
    }
};