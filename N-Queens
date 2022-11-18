class Solution {
public:
    vector<vector<string>> ans;
    int nl;

    bool check(vector<string> &v, int row, int col) {
        /* Check this row on left side */
        for(int i=0; i<col; i++) if(v[row][i] == 'Q') return false;
        /* Check upper diagonal on left side */
        for(int i=row, j=col; i>=0 and j>=0; i--, j--) if(v[i][j] == 'Q') return false;
        /* Check lower diagonal on left side */
        for(int i=row, j=col; j>=0 and i<nl; i++, j--) if(v[i][j] == 'Q') return false;

        return true;
    }

    void solve(vector<string> &v, int col) {
        if(col >= nl) {
            ans.push_back(v);
            return;
        }
        
        for(int i=0; i<nl; i++) {
            if(check(v, i, col)) {
                v[i][col] = 'Q';
                solve(v, col+1);
                v[i][col] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        nl = n;
        vector<string> v(nl, string(nl, '.'));
        solve(v, 0);
        return ans;
    }
};
