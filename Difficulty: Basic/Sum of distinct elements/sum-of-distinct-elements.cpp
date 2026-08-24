class Solution {
  public:
    int findSum(vector<int>& arr) {
        // code here
        set<int>s{arr.begin(),arr.end()};
        int ans=0;
        for(int d:s){
            ans+=d;
        }
        return ans;
    }
};