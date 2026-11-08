class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        // Calculate discriminant
        int discriminant = b * b - 4 * a * c;

        // If roots are imaginary
        if (discriminant < 0) {
            return {-1};
        }

        // Calculate the square root of the discriminant
        double sqrtVal = sqrt(discriminant);

        // Calculate both roots
        double root1 = (-b + sqrtVal) / (2.0 * a);
        double root2 = (-b - sqrtVal) / (2.0 * a);

        // Take floor values
        int r1 = floor(root1);
        int r2 = floor(root2);

        // Return in decreasing order
        if (r1 >= r2) {
            return {r1, r2};
        } else {
            return {r2, r1};
        }
    }
};