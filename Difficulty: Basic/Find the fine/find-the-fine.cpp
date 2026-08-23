class Solution {
  public:
    long long int totalFine(int date, vector<int> &car, vector<int> &fine) {
        // code here
        vector<int>vec;
        vector<int>vec1;
        long long sum=0;
        if(date%2==0){
            for(int i=0;i<car.size();i++){
                if(car[i]%2!=0) vec.push_back(i);
            }
            for(int i=0;i<vec.size();i++){
                sum+=fine[vec[i]];
            }
        }
        else{
            for(int i=0;i<car.size();i++){
                if(car[i]%2==0) vec1.push_back(i);
            }
            for(int i=0;i<vec1.size();i++){
                sum+=fine[vec1[i]];
            }
        }
        return sum;
    }
};