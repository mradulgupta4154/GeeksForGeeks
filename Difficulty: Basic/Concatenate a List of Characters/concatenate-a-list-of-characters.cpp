class Solution {
  public:
    string charToStr(vector<string> &arr) {
        // code here
        string c="";
        for(int i=0;i<arr.size();i++){
            c+=arr[i];
        }
        return c;
    }
};