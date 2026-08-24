class Solution {
  public:
    vector<int> dupLastIndex(vector<int>& arr) {
        // code here
        vector<int>vec(2,-1);
        for(int i=arr.size()-1;i>=1;i--){
            if(arr[i]==arr[i-1]){
                vec[0]=i;
                vec[1]=arr[i];
                break;
            }
            
        }
        return vec;
    }
};