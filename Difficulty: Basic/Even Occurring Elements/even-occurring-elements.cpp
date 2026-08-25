class Solution {
  public:
    vector<int> findEvenOccurrences(vector<int>& arr) {
        // code here
        unordered_map<int,int> m;
        for (int c : arr) m[c]++;
        vector<int> vec;
        unordered_set<int> added;
        for (int num : arr) {
            if (m[num] % 2 == 0 && !added.count(num)) {
                vec.push_back(num);
                added.insert(num);
            }
        }
        if (vec.empty()) {
            vec.push_back(-1);   // only add this if the problem spec asks for it
        }
        return vec;
    }
};
