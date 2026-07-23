class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int,vector<int>>freq;
        int n = groupSizes.size();
        vector<vector<int>>result;

        for(int i=0; i < n; i++){
            freq[groupSizes[i]].push_back(i);

            if(freq[groupSizes[i]].size()==groupSizes[i]){
                result.push_back(freq[groupSizes[i]]);
                freq[groupSizes[i]].clear();
            }
        }
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna