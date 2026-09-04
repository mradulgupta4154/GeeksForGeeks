class Solution {
  public:
    bool areConsecutives(vector<int>& arr) {
        // code here
        sort(arr.begin(),arr.end());
        bool is =true;
        for(int i=1;i<arr.size();i++){
            if(arr[i]-arr[i-1]>1 or arr[i]-arr[i-1]==0) is=false;
        }
        return is;
    }
};
