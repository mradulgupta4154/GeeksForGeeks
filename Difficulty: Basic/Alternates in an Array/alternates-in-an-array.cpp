class Solution {
  public:
    vector<int> getAlternates(vector<int> &arr) {
        // code here
        vector<int>vec;
        for(int i=0;i<arr.size();i+=2){
            vec.push_back(arr[i]);
        }
        return vec;
    }
};