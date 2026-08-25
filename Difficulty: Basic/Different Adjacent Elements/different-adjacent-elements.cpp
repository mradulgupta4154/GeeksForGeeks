class Solution {
public:
    bool distinctAdjacent(vector<int> &arr) {
        int n = arr.size();
        unordered_map<int, int> freq;
        int max_freq = 0;

        for (int num : arr) {
            freq[num]++;
            max_freq = max(max_freq, freq[num]);
        }

        return max_freq <= (n + 1) / 2;
    }
};