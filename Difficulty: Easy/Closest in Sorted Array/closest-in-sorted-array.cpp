class Solution {
  public:
    int findClosest(vector<int>& arr, int k) {
        // Code Here
        unordered_map<int,int>m;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]=abs(k-arr[i]);
        }
        int bestVal = arr[0];
        int bestDiff = m[arr[0]];

        for (auto& [val, diff] : m) {
            if (diff < bestDiff || (diff == bestDiff && val > bestVal)) {
                bestDiff = diff;
                bestVal = val;
            }
        }

        return bestVal;
    }
};