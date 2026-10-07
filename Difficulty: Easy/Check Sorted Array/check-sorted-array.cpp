class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // code here
        bool is=true;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]>arr[i+1]){
                is=false;
                break;
            }
        }
        return is;
    }
};