class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        // code here
        for(int i=0;i<arr.size();i++){
            if(arr[i]>=target) return i;
        }
        return arr.size();
    }
};
