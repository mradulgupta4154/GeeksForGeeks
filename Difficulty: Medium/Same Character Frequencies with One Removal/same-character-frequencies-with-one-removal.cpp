#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool sameFreq(string &s) {
        unordered_map<char, int> charCount;
        for (char c : s) {
            charCount[c]++;
        }

        // Map to store how many times each frequency occurs
        unordered_map<int, int> freqCount;
        for (auto &pair : charCount) {
            freqCount[pair.second]++;
        }

        // If all characters have the same frequency
        if (freqCount.size() == 1) {
            return true;
        }

        // If there are more than 2 different frequencies, it's impossible
        if (freqCount.size() != 2) {
            return false;
        }

        // Extract the two frequencies and their counts
        auto it = freqCount.begin();
        int f1 = it->first, c1 = it->second;
        it++;
        int f2 = it->first, c2 = it->second;

        // Condition A: One frequency is 1 and it occurs only once (remove that single character)
        if ((f1 == 1 && c1 == 1) || (f2 == 1 && c2 == 1)) {
            return true;
        }

        // Condition B: The difference is 1, and the higher frequency occurs only once
        if ((abs(f1 - f2) == 1)) {
            if ((f1 > f2 && c1 == 1) || (f2 > f1 && c2 == 1)) {
                return true;
            }
        }

        return false;
    }
};