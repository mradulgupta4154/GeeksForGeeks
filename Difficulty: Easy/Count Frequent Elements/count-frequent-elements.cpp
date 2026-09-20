class Solution {
  public:
    int countOccurence(vector<int>& arr, int k) {
        // code here
        unordered_map<int,int>m;
        for(int c:arr){
            m[c]++;
        }
        int w=arr.size()/k;
        int coun=0;
        for(auto&[num,count]:m){
            if(count>w) coun++;
        }
        return coun;
    }
};