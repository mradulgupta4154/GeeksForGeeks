class Solution {
  public:
    bool checkIsAP(vector<int> &arr) {
        // Your code goes here
        bool is=true;
        sort(arr.begin(),arr.end());
        for(int i=1;i<arr.size()-1;i++){
            if(arr[i]-arr[i-1] !=arr[i+1]-arr[i]){
                is=false;
                break;
            }
        }
        return is;
    }
};