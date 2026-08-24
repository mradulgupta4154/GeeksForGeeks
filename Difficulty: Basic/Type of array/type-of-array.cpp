class Solution {
public:
    int typeOfArr(vector<int>& arr) {
        int n = arr.size();
        int mini = arr[0], maxi = arr[0];

        for (int i = 1; i < n; i++) {
            if (arr[i] > maxi) maxi = arr[i];
            if (arr[i] < mini) mini = arr[i];
        }

        // Ascending or Descending Rotated
        if (arr[0] < arr[n - 1]) {
            if (maxi == arr[n - 1]) return 1; // Ascending
            return 3;                         // Descending Rotated
        } 
        // Descending or Ascending Rotated
        else {
            if (maxi == arr[0]) return 2;     // Descending
            return 4;                         // Ascending Rotated
        }
    }
};