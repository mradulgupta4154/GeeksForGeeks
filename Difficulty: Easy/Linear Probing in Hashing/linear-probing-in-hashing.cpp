class Solution {
public:
    vector<int> linearProbing(vector<int>& arr, int m) {
        // Initialize hash table with -1 to indicate empty slots
        vector<int> hashTable(m, -1);

        for (int i = 0; i < arr.size(); i++) {
            int key = arr[i];
            int idx = key % m;
            int initialIdx = idx;
            bool inserted = false;

            // Probe through the hash table using linear probing
            for (int t = 0; t < m; t++) {
                // If the slot is empty, insert the element
                if (hashTable[idx] == -1) {
                    hashTable[idx] = key;
                    inserted = true;
                    break;
                }

                // If the exact same value already exists in the table, ignore/skip it
                if (hashTable[idx] == key) {
                    inserted = true;
                    break;
                }

                // Move to the next index linearly: (idx + 1) % m
                idx = (idx + 1) % m;
            }
            // If the table is full and no slot/duplicate match was found, the element is discarded.
        }

        return hashTable;
    }
};