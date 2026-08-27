class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        vector<int>z,o;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0) z.push_back(arr[i]);
            else o.push_back(arr[i]);
        }
        arr.clear();
        arr.insert(arr.end(),z.begin(),z.end());
        arr.insert(arr.end(),o.begin(),o.end());
    }
};