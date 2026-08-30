class Solution {
  public:
    void modifyArray(vector<int>& arr) {
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            // Swap arr[i] to its correct position if it's valid and not already there
            while (arr[i] != -1 && arr[i] != i) {
                int correctPos = arr[i];

                // If the target position already has the correct element, break to avoid infinite loop
                if (arr[correctPos] == correctPos) {
                    break;
                }

                std::swap(arr[i], arr[correctPos]);
            }
        }

        // Mark any remaining element that isn't equal to its index as -1
        for (int i = 0; i < n; i++) {
            if (arr[i] != i) {
                arr[i] = -1;
            }
        }
    }
};