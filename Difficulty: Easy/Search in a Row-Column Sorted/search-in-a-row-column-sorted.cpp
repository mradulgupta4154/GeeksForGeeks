class Solution {
  public:
    bool matSearch(vector<vector<int>> &arr, int x) {
        // code here
        bool is=false;
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr[i].size();j++){
                if(arr[i][j]==x){
                    
                    is=true;
                    break;
                } 
            }
        }
        return is;
    }
};