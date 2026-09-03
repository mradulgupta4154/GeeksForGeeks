class Solution {
  public:
    int sumOfDistinct(vector<int>& arr) {
        // code here
        int sum=0;
        set<int>s(arr.begin(),arr.end());
        vector<int>vec(s.begin(),s.end());
        for(int i=0;i<vec.size();i++){
            sum+=vec[i];
        }
        return sum;
    }
};