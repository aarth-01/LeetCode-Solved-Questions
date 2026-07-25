class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        int n = queries.size(), m = points.size();
        vector<int>result;

        for(int i=0; i< n ;i++){
            int x = queries[i][0], y = queries[i][1], r = queries[i][2] , count=0;
            
            for(int j=0; j<m ; j++){
                float  d = sqrt(pow(x-points[j][0],2) + pow(y-points[j][1],2));
                if(d<=r) count++;
            }
            
            result.push_back(count);
        }

        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna