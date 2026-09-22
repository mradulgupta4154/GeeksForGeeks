class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        unordered_map<int,int>m;
        for(int c:arr){
            m[c]++;
        }
        int e=arr.size()/2,r=-1;
        for(auto&[num,count]:m){
            if(count>e) r=num;
        }
        return r;
    }
};