class Solution {
  public:
    int countNonRepeated(vector<int>& arr) {
        //  code here
        unordered_map<int,int>m;
        for(int c:arr){
            m[c]++;
        }
        int k=0;
        for(auto&[num,count]:m){
            if(count==1) k++;
        }
        
        return k;
    }
};