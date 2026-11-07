class Solution {
  public:
    vector<int> countFreq(vector<int>& arr) {
        // Code Here
        map<int,int>m;
        for(int c:arr){
            m[c]++;
        }
        vector<int>vec;
        int a=0;
        for(auto&[num,count]:m){
            a+=count;
            vec.push_back(a);
        }
        return vec;
    }
};