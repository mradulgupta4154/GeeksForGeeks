class Solution {
  public:
    vector<int> alternateSort(vector<int>& arr) {
        // code here;
        vector<int>d=arr;
        sort(arr.begin(),arr.end());
        sort(d.rbegin(),d.rend());
        vector<int>vec(arr.size());
        int i=0,o=0,e=0;
        while(i!=arr.size()){
            if(i%2==0){
                vec[i]=d[o];
                o++;
            }
            else{
                vec[i]=arr[e];
                e++;
            }
            i++;
        }
        return vec;
    }
};
