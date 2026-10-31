class Solution {
   public:
     vector<int> findDuplicates(vector<int>& arr) {
         unordered_map<int,int> m;
         vector<int> vec;

         for (int c : arr) {
             m[c]++;
         }

         for (int c : arr) {
             if (m[c] > 1) {
                 vec.push_back(c);
                 m[c] = 0;           // so it isn't added again
             }
         }

         if (vec.empty()) return {-1};
         return vec;
     }
 };