class Solution {
public:
    int findEqualPoint(vector<int>& arr) {
        // Step 1: Extract unique elements
        vector<int> unique_arr;
        for (int i = 0; i < arr.size(); ++i) {
            if (i == 0 || arr[i] != arr[i - 1]) {
                unique_arr.push_back(arr[i]);
            }
        }

        int u_len = unique_arr.size();

        // Step 2: Check if an equal point exists
        // (u_len - 1) must be divisible by 2
        if ((u_len - 1) % 2 != 0) {
            return -1;
        }

        // Step 3: Identify the target element
        int target = unique_arr[(u_len - 1) / 2];

        // Step 4: Find the first index of target in the original array
        for (int i = 0; i < arr.size(); ++i) {
            if (arr[i] == target) {
                return i;
            }
        }

        return -1;
    }
};