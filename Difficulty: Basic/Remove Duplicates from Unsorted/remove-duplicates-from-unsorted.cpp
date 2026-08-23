class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
       unordered_set<int> seen;
       vector<int> vec;
       for(int x : arr){
           if(seen.find(x) == seen.end()){   // not seen before
               seen.insert(x);
               vec.push_back(x);             // keep original order
           }
       }
       return vec;
   }
};