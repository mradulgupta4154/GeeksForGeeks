#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    string maximumFrequency(string &s) {
        stringstream ss(s);
        string word;

        unordered_map<string, int> freqMap;
        vector<string> order; // To preserve the original order of words

        while (ss >> word) {
            if (freqMap.find(word) == freqMap.end()) {
                order.push_back(word);
            }
            freqMap[word]++;
        }

        string maxWord = "";
        int maxFreq = 0;

        // Traverse in the order of first appearance to handle ties correctly
        for (const string &w : order) {
            if (freqMap[w] > maxFreq) {
                maxFreq = freqMap[w];
                maxWord = w;
            }
        }

        return maxWord + " " + to_string(maxFreq);
    }
};