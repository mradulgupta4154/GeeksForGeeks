class Solution {
  public:
    // count set bits of a number
    int countBits(int n) {
        int count = 0;
        while (n > 0) {
            count += n & 1;   // add last bit
            n = n >> 1;       // remove last bit
        }
        return count;
    }

    vector<int> sortBySetBitCount(vector<int>& arr) {
        // buckets[i] stores numbers having i set bits (max 32 bits)
        vector<vector<int>> buckets(32);

        // go left to right, so original order is kept
        for (int i = 0; i < arr.size(); i++) {
            int bits = countBits(arr[i]);
            buckets[bits].push_back(arr[i]);
        }

        // put back from most set bits to least
        int idx = 0;
        for (int bits = 31; bits >= 0; bits--) {
            for (int j = 0; j < buckets[bits].size(); j++) {
                arr[idx] = buckets[bits][j];
                idx++;
            }
        }

        return arr;
    }
};