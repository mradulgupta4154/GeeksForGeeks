class Solution {
  public:
    vector<int> arrangeOddAndEven(vector<int>& arr) {
        // Your code goes here
        vector<int>odd,even,ans;
        for(int i=0;i<arr.size();i++){
            if(arr[i]%2==0) even.push_back(arr[i]);
            else odd.push_back(arr[i]);
        }
        int o=0,e=0;
        while (e < even.size() && o < odd.size()) {
             ans.push_back(even[e++]);
             ans.push_back(odd[o++]);
         }
        while (e < even.size()) {
            ans.push_back(even[e++]);
        }
        while (o < odd.size()) {
            ans.push_back(odd[o++]);
        }
        return ans;
    }
    
};
