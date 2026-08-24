class Solution {
public:
    bool te(int a){
        vector<int> vec;
        while(a>0){
            int d = a%10;
            vec.push_back(d);
            a /= 10;
        }

        if(vec.size() < 2) return false;   // single-digit numbers can't have adjacent-digit pairs

        for(int i=0; i<vec.size()-1; i++){  // stop one early to avoid out-of-bounds
            if(abs(vec[i]-vec[i+1]) != 1) return false;
        }
        return true;
    }

    vector<int> getDigitDiff1AndLessK(vector<int>& arr, int k) {
        vector<int> vec;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]<k && te(arr[i])) vec.push_back(arr[i]);
        }
        return vec;
    }
};