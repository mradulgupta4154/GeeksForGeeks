class Solution {
public:
    vector<string> winner(vector<string>& arr) {
        unordered_map<string, int> voteCount;

        // Step 1: Count votes for each candidate
        for (const string& candidate : arr) {
            voteCount[candidate]++;
        }

        string bestCandidate = "";
        int maxVotes = 0;

        // Step 2: Find the winner with max votes and lexicographically smallest name
        for (const auto& pair : voteCount) {
            string candidate = pair.first;
            int votes = pair.second;

            if (votes > maxVotes) {
                maxVotes = votes;
                bestCandidate = candidate;
            } else if (votes == maxVotes) {
                if (candidate < bestCandidate) {
                    bestCandidate = candidate;
                }
            }
        }

        return {bestCandidate, to_string(maxVotes)};
    }
};