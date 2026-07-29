class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        int n = score.size();
        for(int i=0; i<n;i++){
            for(int j = i+1; j<n; j++){
                if(score[j][k]>score[i][k]) swap(score[j],score[i]);
            }
        }
        return score;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna