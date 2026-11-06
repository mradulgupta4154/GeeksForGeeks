class Solution {
public:
    int earliestLastOcc(vector<int>& arr) {
        unordered_set<int> visited;
        int ans = -1;

        // Traverse from right to left to easily find the last occurrence
        for (int i = arr.size() - 1; i >= 0; i--) {
            // If the element is not yet visited, this position is its last occurrence
            if (visited.find(arr[i]) == visited.end()) {
                visited.insert(arr[i]);
                ans = arr[i]; // Since we move backwards, the last updated 'ans' 
                              // will be the one with the smallest index.
            }
        }

        return ans;
    }
};