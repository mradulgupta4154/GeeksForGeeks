class Solution {
  public:
    void zigZag(vector<int>& arr) {
        int n = arr.size();

        for (int i = 0; i < n - 1; i++) {
            // Even index expects arr[i] < arr[i+1]
            if (i % 2 == 0) {
                if (arr[i] > arr[i + 1]) {
                    swap(arr[i], arr[i + 1]);
                }
            } 
            // Odd index expects arr[i] > arr[i+1]
            else {
                if (arr[i] < arr[i + 1]) {
                    swap(arr[i], arr[i + 1]);
                }
            }
        }
    }
};