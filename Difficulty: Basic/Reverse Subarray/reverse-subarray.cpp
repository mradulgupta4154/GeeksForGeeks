class Solution {
  public:
    vector<int> reverseSubArray(vector<int> &arr, int l, int r) {
        // code here
        int low=l-1;
        int high=r-1;
        while(low<high){
            swap(arr[low],arr[high]);
            low++;
            high--;
        }
        return arr;
    
            
    }
};