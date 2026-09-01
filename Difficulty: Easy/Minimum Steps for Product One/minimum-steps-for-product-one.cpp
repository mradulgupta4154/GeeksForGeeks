class Solution {
public:
    int makeProductOne(vector<int>& arr) {
        int steps = 0;
        int zeroCount = 0;
        int negCount = 0;

        for (int x : arr) {
            if (x == 0) {
                zeroCount++;
                steps += 1; // 0 to 1 takes 1 step
            } else if (x > 0) {
                steps += (x - 1);
            } else {
                steps += (-1 - x);
                negCount++;
            }
        }

        // If negative count is odd and we have no zero to flip the sign, add 2 steps
        if (negCount % 2 != 0 && zeroCount == 0) {
            steps += 2;
        }

        return steps;
    }
};