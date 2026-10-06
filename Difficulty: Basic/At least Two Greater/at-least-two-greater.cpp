class Solution {
  public:
    vector<int> findElements(vector<int> arr) {
        sort(arr.begin(),arr.end());
        vector<int>vec;
        for(int i=0;i<arr.size()-2;i++){
            vec.push_back(arr[i]);
        }
        return vec;
    }
};