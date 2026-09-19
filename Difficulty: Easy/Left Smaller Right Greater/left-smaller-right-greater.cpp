class Solution {
public:
    int findElement(vector<int> &arr) {
        int n = arr.size();
        if (n < 3) return -1;

        // rightMin[i] will store minimum element in arr[i...n-1]
        vector<int> rightMin(n);
        rightMin[n - 1] = arr[n - 1];

        for (int i = n - 2; i >= 0; i--) {
            rightMin[i] = min(rightMin[i + 1], arr[i]);
        }

        int leftMax = arr[0];

        // Check elements from index 1 to n-2
        for (int i = 1; i < n - 1; i++) {
            // Check if arr[i] >= all elements to its left 
            // AND arr[i] <= all elements to its right
            if (arr[i] >= leftMax && arr[i] <= rightMin[i + 1]) {
                return arr[i];
            }
            leftMax = max(leftMax, arr[i]);
        }

        return -1;
    }
};