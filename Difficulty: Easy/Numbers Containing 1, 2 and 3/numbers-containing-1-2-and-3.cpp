class Solution {
  public:
    bool checker(int a){
        string c=to_string(a);
        bool is=true;
        for(int i=0;i<c.length();i++){
           if (c[i] != '1' && c[i] != '2' && c[i] != '3') {
                is=false;
                break;
            }
        }
        return is;
    }
    vector<int> filterByDigits(vector<int>& arr) {
        // code here
        vector<int>vec;
        for(int i=0;i<arr.size();i++){
            if(checker(arr[i])){
                vec.push_back(arr[i]);
            }
        }
        return vec;
        if (vec.empty()) {
                    return {-1};
                }
    }
};
