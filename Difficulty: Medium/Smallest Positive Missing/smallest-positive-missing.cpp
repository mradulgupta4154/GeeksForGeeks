#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n = arr.size();

        // Place each number in its correct position: arr[i] should be at index arr[i] - 1
        for (int i = 0; i < n; i++) {
            while (arr[i] > 0 && arr[i] <= n && arr[arr[i] - 1] != arr[i]) {
                swap(arr[i], arr[arr[i] - 1]);
            }
        }

        // Find the first index where arr[i] is not equal to i + 1
        for (int i = 0; i < n; i++) {
            if (arr[i] != i + 1) {
                return i + 1;
            }
        }

        // If 1 to N are all present, the missing number is N + 1
        return n + 1;
    }
};