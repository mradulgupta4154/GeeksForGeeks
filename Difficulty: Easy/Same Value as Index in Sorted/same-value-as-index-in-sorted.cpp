class Solution {
  public:
    int findMagicalNumber(vector<int>& arr) {
        // code here
        for(int i=0;i<arr.size();i++){
            if(arr[i]==i) return arr[i];
        }
        return -1;
    }
};