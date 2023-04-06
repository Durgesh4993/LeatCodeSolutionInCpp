class Solution {
public:
    int closedIsland(vector<vector<int>>& grid) {
        int rows = grid.size(), cols = grid[0].size(), count = 0;
        
        function<bool(int, int)> dfs = [&](int i, int j) {
            if (i < 0 || j < 0 || i >= rows || j >= cols) {
                return false;
            }
            if (grid[i][j] == 1) {
                return true;
            }
            grid[i][j] = 1; // mark as visited
            bool left = dfs(i, j-1), right = dfs(i, j+1), up = dfs(i-1, j), down = dfs(i+1, j);
            return left && right && up && down;
        };
        
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == 0 && dfs(i, j)) {
                    count++;
                }
            }
        }
        
        return count;
    }
};
