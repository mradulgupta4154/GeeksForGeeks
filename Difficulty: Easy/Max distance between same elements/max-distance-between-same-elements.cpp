class Solution {
  public:
    int maxDistance(vector<int> &arr) {
        unordered_map<int, int> firstIndex;
        int maxDist = 0;

        for (int i = 0; i < arr.size(); i++) {
            // If the element is seen for the first time, store its index
            if (firstIndex.find(arr[i]) == firstIndex.end()) {
                firstIndex[arr[i]] = i;
            } else {
                // If seen before, calculate distance and update maxDist
                int dist = i - firstIndex[arr[i]];
                maxDist = max(maxDist, dist);
            }
        }

        return maxDist;
    }
};