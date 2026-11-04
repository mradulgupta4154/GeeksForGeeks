

class Solution {
  public:
    // Function to check whether the array contains
    // a set of contiguous integers
    bool areElementsContiguous(vector<int>& arr) {
        // Complete the function
        bool is=true;
        set<int>s{arr.begin(),arr.end()};
        vector<int>vec{s.begin(),s.end()};
        for(int i=1;i<vec.size()-1;i++){
            if(vec[i+1]-vec[i]!=vec[i]-vec[i-1]) {
                is=false;
                break;
            }
        }
        return is;
        
    }
};