#include <vector>
#include <unordered_map>

class Solution {
public:
    bool isSubset(std::vector<int>& a, std::vector<int>& b) {
        std::unordered_map<int, int> freq;

        // Count frequencies of elements in array a[]
        for (int num : a) {
            freq[num]++;
        }

        // Check elements of array b[] against the frequency map
        for (int num : b) {
            if (freq[num] > 0) {
                freq[num]--;
            } else {
                return false;
            }
        }

        return true;
    }
};