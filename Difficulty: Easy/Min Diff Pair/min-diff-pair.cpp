class Solution {
  public:
    int minDiff(vector<int>& arr) {
        // code here
        sort(arr.begin(),arr.end());
        int e=INT_MAX;
        for(int i=0;i<arr.size()-1;i++){
            int f=arr[i+1]-arr[i];
            e=min(e,f);
        }
        return e;
    }
};