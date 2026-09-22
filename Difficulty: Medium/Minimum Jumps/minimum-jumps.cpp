#include <vector>
#include <algorithm>

class Solution {
public:
    int minJumps(std::vector<int>& arr) {
        int n = arr.size();

        // If there's 1 or 0 elements, 0 jumps needed
        if (n <= 1) return 0;

        // If first element is 0, we can't move anywhere
        if (arr[0] == 0) return -1;

        int maxReach = arr[0];
        int step = arr[0];
        int jump = 1;

        for (int i = 1; i < n - 1; ++i) {
            // Update the maximum reach possible from index i
            maxReach = std::max(maxReach, i + arr[i]);

            // We used a step to get to index i
            step--;

            // If no more steps are left in the current jump range
            if (step == 0) {
                // We must take a jump
                jump++;

                // Check if the current index is beyond or at maxReach
                if (i >= maxReach) return -1;

                // Re-initialize steps to reaching the maxReach from current index
                step = maxReach - i;
            }
        }

        // Final check if we can reach the last index
        return (maxReach >= n - 1) ? jump : -1;
    }
};