class Solution {
public:
    long long distance(vector<int>& arr) {
        int n = arr.size();

        // Stores the 0-based index of each value
        vector<int> pos(n + 1);
        for (int i = 0; i < n; i++) {
            pos[arr[i]] = i;
        }

        long long total_distance = 0;
        for (int i = 1; i < n; i++) {
            total_distance += abs(pos[i + 1] - pos[i]);
        }

        return total_distance;
    }
};