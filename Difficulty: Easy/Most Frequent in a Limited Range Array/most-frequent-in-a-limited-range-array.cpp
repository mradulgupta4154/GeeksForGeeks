class Solution {
public:
    int maxRepeating(int k, vector<int>& arr) {
        // Create a frequency array of size k initialized to 0
        vector<int> freq(k, 0);

        // Count frequencies of each element
        for (int num : arr) {
            freq[num]++;
        }

        int maxFreq = 0;
        int result = 0;

        // Find the element with the maximum frequency.
        // Looping from 0 to k-1 ensures we pick the smallest element in case of a tie.
        for (int i = 0; i < k; i++) {
            if (freq[i] > maxFreq) {
                maxFreq = freq[i];
                result = i;
            }
        }

        return result;
    }
};