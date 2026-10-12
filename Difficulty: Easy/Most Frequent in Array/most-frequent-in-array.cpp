class Solution {
  public:
    int mostFreqEle(vector<int>& arr) {
        unordered_map<int, int> m;
        for (int i = 0; i < arr.size(); i++) {
            m[arr[i]]++;
        }

        int best = arr[0];
        int bestCount = 0;

        for (auto& p : m) {
            int num = p.first;
            int cnt = p.second;

            if (cnt > bestCount || (cnt == bestCount && num > best)) {
                best = num;
                bestCount = cnt;
            }
        }

        return best;
    }
};
