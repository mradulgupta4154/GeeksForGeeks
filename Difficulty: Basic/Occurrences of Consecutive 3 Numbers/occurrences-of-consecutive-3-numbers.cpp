class Solution {
  public:
    int specialIntegers(vector<int> &arr) {
        // code here
        set<int>s(arr.begin(),arr.end());
        vector<int>vec(s.begin(),s.end());
        int count=0;
        for(int i=1;i<vec.size()-1;i++){
            if(vec[i]==vec[i-1]+1 and vec[i]==vec[i+1]-1) count++;
        }
        return count;
        
    }
};