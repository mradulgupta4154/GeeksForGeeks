class Solution {
public:
    int maxConsecBits(vector<int>& arr) {
        int count = 1, maxi = 1;
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] == arr[i-1]) {
                count++;
            } else {
                count = 1;   // reset: new run starts
            }
            maxi = max(maxi, count);
        }
        return maxi;
    }
};