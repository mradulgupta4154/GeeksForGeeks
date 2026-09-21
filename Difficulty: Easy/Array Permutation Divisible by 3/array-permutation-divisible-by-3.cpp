class Solution {
  public:
    bool isPossible(vector<int>& arr) {
        // code here
        string c="";
        for(int i=0;i<arr.size();i++){
            c+=to_string(arr[i]);
        }
        int e=0;
        for(int i=0;i<c.length();i++){
            e+=c[i]-'0';
        }
        return e%3==0;
    }
};