class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int>& arr) {
        int floorVal = -1;
        int ceilVal = -1;

        for (int num : arr) {
            // Update floor: largest element <= x
            if (num <= x) {
                if (floorVal == -1 || num > floorVal) {
                    floorVal = num;
                }
            }
            // Update ceil: smallest element >= x
            if (num >= x) {
                if (ceilVal == -1 || num < ceilVal) {
                    ceilVal = num;
                }
            }
        }

        return {floorVal, ceilVal};
    }
};