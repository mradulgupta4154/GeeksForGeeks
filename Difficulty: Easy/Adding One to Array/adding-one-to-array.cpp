class Solution {
  public:
    vector<int> addOne(vector<int>& arr) {
        int n = arr.size();

        // Traverse from the least significant digit (right to left)
        for (int i = n - 1; i >= 0; i--) {
            if (arr[i] < 9) {
                arr[i]++;
                return arr; // No further carry needed
            }
            arr[i] = 0; // Carry generated, current digit becomes 0
        }

        // If all digits were 9, we need an extra digit at the front
        arr.insert(arr.begin(), 1);
        return arr;
    }
};