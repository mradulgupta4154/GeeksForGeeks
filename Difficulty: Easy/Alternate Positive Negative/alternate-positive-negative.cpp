class Solution {
  public:
    void rearrange(vector<int> &arr) {
        // code here
        int n=arr.size();
        vector<int>pos,neg;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<0){
                neg.push_back(arr[i]);
            }
            else{
                pos.push_back(arr[i]);
            }
        }
        arr.erase(arr.begin(),arr.end());
        int p=0,ne=0;
        while (p < pos.size() && ne < neg.size()) {
                arr.push_back(pos[p++]);
                arr.push_back(neg[ne++]);
        }
        while (p < pos.size()) {
            arr.push_back(pos[p++]);
        }
        while (ne < neg.size()) {
            arr.push_back(neg[ne++]);
        }
        
    }
};