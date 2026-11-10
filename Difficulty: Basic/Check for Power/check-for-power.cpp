class Solution {
public:
    bool isPower(int x, int y) {
        // Base case: 1 to any power is 1
        if (x == 1) {
            return (y == 1);
        }

        // Repeatedly divide y by x as long as it's divisible
        while (y > 1 && y % x == 0) {
            y /= x;
        }

        // If y reduced to 1, it was a power of x
        return (y == 1);
    }
};