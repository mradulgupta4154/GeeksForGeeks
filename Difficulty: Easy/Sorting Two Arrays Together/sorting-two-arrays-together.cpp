class Solution {
  public:
    vector<string> sortRecords(vector<string>& employee, vector<int>& salary) {
        int n = employee.size();

        vector<pair<int, string>> v;
        for (int i = 0; i < n; i++) {
            v.push_back({salary[i], employee[i]});
        }

        // pair comparison: salary first, then name alphabetically
        sort(v.begin(), v.end());

        vector<string> res;
        for (int i = 0; i < n; i++) {
            res.push_back(v[i].second);
        }

        return res;
    }
};