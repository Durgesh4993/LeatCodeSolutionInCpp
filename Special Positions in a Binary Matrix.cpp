class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n = mat.size(), m = mat[0].size();
        vector<int> row,col; //no of zeros
        int specialPosition = 0;
        for(int i=0; i<n; ++i){
            int zeros = 0;
            for(int j=0; j<m; ++j){
                if(mat[i][j] == 0) zeros++;
            }
            row.push_back(zeros);
        }
        for(int i=0; i<m; ++i){
            int zeros = 0;
            for(int j=0; j<n; ++j){
                if(mat[j][i] == 0) zeros++;
            }
            col.push_back(zeros);
        }
        for(int i=0; i<n; ++i){
            for(int j=0; j<m; ++j){
                if(mat[i][j]){
                    if(row[i] == m-1 && col[j] == n-1) specialPosition++;
                }
            }
        }
        return specialPosition;
    }
};
