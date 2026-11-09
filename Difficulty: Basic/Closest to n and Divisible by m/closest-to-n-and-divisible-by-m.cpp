class Solution {
public:
    int closestNumber(int n, int m) {
        // Find the quotient
        int q = n / m;

        // First candidate closest multiple
        int n1 = m * q;

        // Second candidate closest multiple
        int n2 = (n * m > 0) ? (m * (q + 1)) : (m * (q - 1));

        // Compare distances from n
        int diff1 = abs(n - n1);
        int diff2 = abs(n - n2);

        if (diff1 < diff2) {
            return n1;
        } else if (diff2 < diff1) {
            return n2;
        } else {
            // If distances are equal, pick the one with the maximum absolute value
            return (abs(n1) > abs(n2)) ? n1 : n2;
        }
    }
};