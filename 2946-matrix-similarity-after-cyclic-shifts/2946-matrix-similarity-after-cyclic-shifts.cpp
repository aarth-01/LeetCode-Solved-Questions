class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int r = mat.size(), c = mat[0].size();
        int n = k % c;

        vector<vector<int>> vec(r, vector<int>(c));

        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                int newPos;
                if(i % 2 == 0){
                    newPos = (j - n + c) % c;
                } else {
                    newPos = (j + n) % c;
                }
                vec[i][newPos] = mat[i][j];
            }
        }

        return vec == mat;
    }
};