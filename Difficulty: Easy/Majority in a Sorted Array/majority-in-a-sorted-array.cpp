class Solution {
  public:
    bool isMajority(vector<int>& arr) {
        // code here
        unordered_map<int,int>m;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        for(auto&[num,count]:m){
            if(count>(arr.size())/2) return true;
        }
        return false;
    }
};
