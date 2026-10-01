class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        // code here
        int a=-1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=x){
                a=i;
            }
        }
        return a;
        
    }
};
