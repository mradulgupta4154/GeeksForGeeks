class Solution {
  public:
    int transitionPoint(vector<int>& arr) {
        // code here
        int a=-1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==1){
                a=i;
                break;
            } 
        }
        return a;
    }
};