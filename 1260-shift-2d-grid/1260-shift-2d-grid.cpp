class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int r = grid.size(), c = grid[0].size(), tot = r*c;
        vector<int>vec;
        k = k%tot;
        for(int i=0; i<r; i++){
            for(int j=0;j<c;j++){
                vec.push_back(grid[i][j]);
            }
        }
        vector<vector<int>>result(r, vector<int>(c));
        int count=0;

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                result[i][j] = vec[(tot-k+count)%tot];
                count++;
            }
        }
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna