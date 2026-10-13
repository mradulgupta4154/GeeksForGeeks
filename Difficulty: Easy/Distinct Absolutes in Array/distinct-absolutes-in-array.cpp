class Solution {
  public:
    int distinctCount(vector<int> &arr) {
        // code here
        for(int i=0;i<arr.size();i++){
            if(arr[i]<0){
                arr[i]*=-1;
            }
            else{
                continue;
            }
        }
        set<int>s{arr.begin(),arr.end()};
        vector<int>vec{s.begin(),s.end()};
        return vec.size();
    }
};