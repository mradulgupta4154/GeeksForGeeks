class Solution {
  public:
    vector<int> distDigit(vector<int>& arr) {
        // Code here
        string ans="";
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0) continue;
            ans+=to_string(arr[i]);
        }
        set<char>s{ans.begin(),ans.end()};
        vector<int>vec;
        for(char c:s){
            vec.push_back(c-'0');
        }
        return vec;
    }
};