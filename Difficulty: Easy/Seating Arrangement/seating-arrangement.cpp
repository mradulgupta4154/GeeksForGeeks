class Solution {
public:
    bool canSeatAllPeople(int k, vector<int> &seats) {
        int n = seats.size();

        // Step 1: Check if the initial state contains any adjacent 1s
        for (int i = 0; i < n - 1; i++) {
            if (seats[i] == 1 && seats[i + 1] == 1) {
                return false;
            }
        }

        // Step 2: Try seating people greedily
        for (int i = 0; i < n; i++) {
            if (k <= 0) break;

            if (seats[i] == 0) {
                bool leftEmpty = (i == 0 || seats[i - 1] == 0);
                bool rightEmpty = (i == n - 1 || seats[i + 1] == 0);

                if (leftEmpty && rightEmpty) {
                    seats[i] = 1; // Seat a person
                    k--;
                }
            }
        }

        return k <= 0;
    }
};