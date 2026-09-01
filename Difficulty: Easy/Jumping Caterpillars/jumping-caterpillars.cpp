class Solution {
public:
    int uneatenLeaves(vector<int>& arr, int m) {
        vector<bool> visited(m + 1, false);

        for (int k : arr) {
            // Optimization: Skip jump lengths larger than m or already processed base jumps
            if (k > m || visited[1 + k]) continue; 

            for (int j = 1; j <= m; j += k) {
                visited[j] = true;
            }
        }

        int uneaten = 0;
        for (int i = 1; i <= m; i++) {
            if (!visited[i]) {
                uneaten++;
            }
        }

        return uneaten;
    }
};