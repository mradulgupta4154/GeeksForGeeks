class Solution {
public:
    int totalTime(vector<int>& arr, vector<int>& penalty) {
        int n = arr.size();
        unordered_set<int> seen;
        int totalTime = 0;

        for (int i = 0; i < n; i++) {
            // If the element has appeared before, add its penalty time
            if (seen.count(arr[i])) {
                totalTime += penalty[arr[i]];
            } 
            // If it appears for the first time, it takes 1 second
            else {
                totalTime += 1;
                seen.insert(arr[i]);
            }
        }

        return totalTime;
    }
};