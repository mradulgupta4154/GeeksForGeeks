class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        unordered_map<int,int>m;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        vector<int>vec;
        for(auto&[num,count]:m){
            if(count==2) vec.push_back(num);
        }
        return vec;
    }
};