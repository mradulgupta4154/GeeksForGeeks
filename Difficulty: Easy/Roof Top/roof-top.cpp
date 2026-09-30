class Solution {
  public:
    int maxStep(vector<int>& arr) {
        // code here
        int count=0,maxi=0;
        for(int i=0;i<arr.size()-1;i++){
            
            if(arr[i]<arr[i+1]){
                count++;
                maxi=max(count,maxi);
            } 
            else{
                count=0;
            }
        }
        return maxi;
    }
};