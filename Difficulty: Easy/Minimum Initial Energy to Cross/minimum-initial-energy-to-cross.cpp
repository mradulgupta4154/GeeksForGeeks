class Solution {
  public:
    int minEnergy(vector<int>& arr) {
        int curr_energy = 0;
        int min_energy = 0;

        for (int x : arr) {
            curr_energy += x;
            min_energy = min(min_energy, curr_energy);
        }
        return (min_energy < 0) ? (1 - min_energy) : 1;
    }
};