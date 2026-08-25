class Solution {
  public:
    vector<int> customSort(vector<int>& arr) {
        // code here
        vector<int>asc,desc;
        for(int i=0;i<arr.size();i++){
            if(i<arr.size()/2){
                asc.push_back(arr[i]);
            }
            else{
                desc.push_back(arr[i]);
            }
        }
        sort(asc.begin(),asc.end());
        sort(desc.rbegin(),desc.rend());
        vector<int>vec;
        for(int i=0;i<arr.size()/2;i++){
            vec.push_back(asc[i]);
        }
        for(int i=arr.size()/2;i<arr.size();i++){
            vec.push_back(desc[i-arr.size()/2]);
        }
        return vec;
    }
};