class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int row = mat.size(), col = mat[0].size(),d=3;
        if(mat == target) return true;
        while(d>0){
            for(int i=0;i<row;i++){
                for(int j=i;j<col;j++){
                    swap(mat[i][j], mat[j][i]);
                }
                //reverse(mat[i].begin(), mat[i].end());
            }
            for(int k=0; k<row ; k++) reverse(mat[k].begin(), mat[k].end());

            if(mat == target) return true;
            d--;
        }
        return false;
        
    }
};