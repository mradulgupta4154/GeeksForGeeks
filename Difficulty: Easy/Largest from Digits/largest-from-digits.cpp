class Solution {
  public:
    string maxNumber(vector<int>& arr) {
        // code here.
        sort(arr.rbegin(),arr.rend());
        string c="";
        for(int i=0;i<arr.size();i++){
            c+=to_string(arr[i]);
        }
        return c;
    }
};