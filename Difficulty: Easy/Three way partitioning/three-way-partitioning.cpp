class Solution {
  public:
    void threeWayPartition(vector<int>& arr, int a, int b) {
        vector<int> aa, bb, cc;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] < a) {
                aa.push_back(arr[i]);
            }
            else if (arr[i] >= a && arr[i] <= b) {
                bb.push_back(arr[i]);
            }
            else {
                cc.push_back(arr[i]);
            }
        }
        arr.clear();
        arr.insert(arr.end(), aa.begin(), aa.end());
        arr.insert(arr.end(), bb.begin(), bb.end());
        arr.insert(arr.end(), cc.begin(), cc.end());
    }
};