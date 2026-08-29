class Solution {
  public:
    int countPairs(vector<int>& arr, int k) {
        unordered_map<int, int> freq;
        for (int num : arr) {
            freq[num]++;
        }

        int count = 0;
        for (auto& entry : freq) {
            int val = entry.first;
            int f = entry.second;

            if (freq.count(val + k)) {
                count += f * freq[val + k];
            }
        }

        return count;
    }
};