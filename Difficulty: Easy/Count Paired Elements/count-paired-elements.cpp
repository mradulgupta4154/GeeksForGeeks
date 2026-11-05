#include <vector>
#include <unordered_map>

class Solution {
public:
    int getTwinCount(std::vector<int>& arr) {
        std::unordered_map<int, int> freqMap;

        // Count frequencies of each element
        for (int num : arr) {
            freqMap[num]++;
        }

        int totalElementsInPairs = 0;

        // Calculate total elements that belong to pairs
        for (auto& pair : freqMap) {
            int count = pair.second;
            // Each pair takes 2 elements, so we drop any odd remainder
            totalElementsInPairs += (count / 2) * 2;
        }

        return totalElementsInPairs;
    }
};