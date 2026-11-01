class Solution {
  public:
    bool checkPermutation(vector<int>& a, vector<int>& b) {
        // code here
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        bool is=true;
        for(int i=0;i<a.size();i++){
            if(a[i]!=b[i]){
                is=false;
                break;
            }
        }
        return is;
        
    }
};