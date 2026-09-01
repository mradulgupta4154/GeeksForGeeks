class Solution {
  public:
    vector<int> reArrange(vector<int>& arr) {
        vector<int>even,odd,ans;
        for(int i=0;i<arr.size();i++){
            if(arr[i]%2==0) even.push_back(arr[i]);
            else odd.push_back(arr[i]);
        }
        int i=0,o=0;
        for(int j=0;j<arr.size();j++){
            if(j%2==0) {
                ans.push_back(even[i]);
                i++;
            }
            else{
                ans.push_back(odd[o]);
                o++;
            }
        }
        return ans;
        // code here
        
    }
};
