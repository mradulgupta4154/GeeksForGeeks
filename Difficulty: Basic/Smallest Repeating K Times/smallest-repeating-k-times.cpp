class Solution {
public:
    int findDuplicate(vector<int>& arr, int k) {
        unordered_map<int, int> freq;

        // Count frequencies of each element
        for (int num : arr) {
            freq[num]++;
        }

        int smallest = -1;

        // Find the smallest number that appears exactly k times
        for (auto& pair : freq) {
            if (pair.second == k) {
                if (smallest == -1 || pair.first < smallest) {
                    smallest = pair.first;
                }
            }
        }

        return smallest;
    }
};