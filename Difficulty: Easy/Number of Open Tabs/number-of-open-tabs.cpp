#include <vector>
#include <unordered_set>
#include <string>

class Solution {
public:
    int countTabs(vector<string> &arr) {
        unordered_set<string> openTabs;

        for (const string &s : arr) {
            if (s == "END") {
                openTabs.clear();
            } else {
                // Toggle state: if it exists, remove it; otherwise, insert it
                if (openTabs.find(s) != openTabs.end()) {
                    openTabs.erase(s);
                } else {
                    openTabs.insert(s);
                }
            }
        }

        return openTabs.size();
    }
};