class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<int,int>mpp;
        int n = s.size(),sum=0;
        for(int i=0;i<n;i++){
            mpp[s[i]]=i;
        }

        for(int i=0;i<n;i++){
            sum += abs(i-mpp[t[i]]);
        }

        return sum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna