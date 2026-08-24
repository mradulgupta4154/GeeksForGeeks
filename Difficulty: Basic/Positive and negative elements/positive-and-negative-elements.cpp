class Solution {
  public:
    vector<int> arranged(vector<int>& arr) {
        // code here
        vector<int>pos,neg;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<0) neg.push_back(arr[i]);
            else pos.push_back(arr[i]);
        }
        vector<int>ans;
        int i = 0, j = 0;
        while(i < pos.size() && j < neg.size()){
            ans.push_back(pos[i++]);
            ans.push_back(neg[j++]);
        }
        while(i < pos.size()) ans.push_back(pos[i++]);
        while(j < neg.size()) ans.push_back(neg[j++]);
        return ans;
    }
};