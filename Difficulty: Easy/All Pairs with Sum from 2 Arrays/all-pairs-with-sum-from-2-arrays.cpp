#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<pair<int, int>> allPairs(int target, vector<int> &arr1, vector<int> &arr2) {
        vector<pair<int, int>> ans;
        unordered_map<int, int> freq;

        // Store frequency of each element in arr2
        for (int v : arr2) {
            freq[v]++;
        }

        // Sort arr1 to ensure output pairs are sorted by the first element
        sort(arr1.begin(), arr1.end());

        for (int u : arr1) {
            int v = target - u;
            if (freq.find(v) != freq.end()) {
                // Add pair for as many times as 'v' occurs in arr2
                for (int count = 0; count < freq[v]; count++) {
                    ans.push_back({u, v});
                }
            }
        }

        return ans;
    }
};