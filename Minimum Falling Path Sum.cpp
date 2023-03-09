class Solution {
public:
   int minFallingPathSum(vector<vector<int>>& A) {
    int rows = A.size(), cols = rows ? A[0].size() : 0, i, j, k;
    int res = INT_MAX;
    
    if(0 == rows || 0 == cols)
        return 0;

    for(i = 1; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            int mn = A[i - 1][j];
            if(j > 0)
                mn = min(mn, A[i - 1][j - 1]);
            if(j < cols - 1)
                mn = min(mn, A[i - 1][j + 1]);
            A[i][j] += mn;
        }
    }
    for(j = 0; j < cols; j++)
        res = min(res, A[rows - 1][j]);
    
    return res;
}
};
