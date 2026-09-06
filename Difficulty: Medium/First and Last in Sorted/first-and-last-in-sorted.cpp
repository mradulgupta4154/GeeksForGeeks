class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        vector<int>vec;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==x) vec.push_back(i);
        }
        if(vec.size()==0) return {-1,-1};
        
        return {vec[0],vec[vec.size()-1]};
    }
};