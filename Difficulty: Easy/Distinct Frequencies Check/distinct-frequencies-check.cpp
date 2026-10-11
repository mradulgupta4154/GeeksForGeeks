class Solution {
  public:
    bool isFrequencyUnique(vector<int>& arr) {
        // code here
        unordered_map<int,int>m,o;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        bool is=true;
        for(auto&[num,count]:m){
            o[count]++;
        }
        for(auto&[num,count]:o){
            if(count>1){
                is=false;
                break;
            }
        }
        return is;
    }
};