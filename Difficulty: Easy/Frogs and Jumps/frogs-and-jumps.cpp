class Solution {
public:
    int unvisitedLeaves(vector<int>& arr, int k) {
        vector<bool> visited(k + 1, false);

        for (int i = 0; i < arr.size(); i++) {
            int step = arr[i];

            // If strength is 1, all leaves are visited
            if (step == 1) return 0;

            // Skip strengths greater than total leaves or already marked leaves
            if (step > k || visited[step]) continue;

            // Mark all multiples of the strength as visited
            for (int j = step; j <= k; j += step) {
                visited[j] = true;
            }
        }

        // Count unvisited leaves from 1 to k
        int unvisitedCount = 0;
        for (int i = 1; i <= k; i++) {
            if (!visited[i]) {
                unvisitedCount++;
            }
        }

        return unvisitedCount;
    }
};