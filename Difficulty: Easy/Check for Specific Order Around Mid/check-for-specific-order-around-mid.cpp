class Solution {
public:
    bool validTrack(vector<int>& arr) {
        int n = arr.size();

        // 1. Array size must be odd
        if (n % 2 == 0) return false;

        int mid = n / 2;

        // 2. Middle element must be 1
        if (arr[mid] != 1) return false;

        // Calculate the expected constant height difference
        int diff = abs(arr[0] - arr[1]);
        if (diff == 0) return false; // Difference must be non-zero

        // Check conditions for the left half and symmetry
        for (int i = 0; i < mid; i++) {
            // Check symmetry (right side matches left side)
            if (arr[i] != arr[n - 1 - i]) return false;

            // Check constant height difference on the left side
            if (i < mid - 1 && abs(arr[i] - arr[i + 1]) != diff) return false;
        }

        // Verify the step to the middle element matches the constant difference
        if (abs(arr[mid - 1] - arr[mid]) != diff) return false;

        return true;
    }
};