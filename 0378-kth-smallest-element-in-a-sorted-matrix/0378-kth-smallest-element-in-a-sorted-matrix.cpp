class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int row = matrix.size(), col = matrix[0].size();
        vector<int>vec;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                vec.push_back(matrix[i][j]);
            }
        }
        sort(vec.begin(),vec.end());
        return vec[k-1];
    }
};