class Solution {
  public:
    int minSum(vector<int>& arr) {
        priority_queue<long long, vector<long long>, greater<long long>> pq;

        for (int i = 0; i < arr.size(); i++) {
            pq.push(arr[i]);
        }

        long long total = 0;

        while (pq.size() > 1) {
            long long x = pq.top(); pq.pop();
            long long y = pq.top(); pq.pop();

            long long s = x + y;
            total += s;
            pq.push(s);
        }

        return total;
    }
};