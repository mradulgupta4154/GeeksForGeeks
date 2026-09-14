class Solution {
  public:
    vector<int> valEqualToPos(vector<int>& arr) {
        // code here
        vector<int>vec;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==i+1) vec.push_back(arr[i]);
        }
        return vec;
    }
};