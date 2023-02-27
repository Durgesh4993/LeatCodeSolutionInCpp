class Solution {
public:
    // Checks if all elements within a sub-grid of size n x n
    // starting from position (x, y) in the grid have the same value.
    bool checkvalue(vector<vector<int>>& grid, int x, int y, int n){
        int m = n, val = grid[x][y];
        for(int i = x; i < x + n; i++){
            for(int j = y; j < y + n; j++){
                if(grid[i][j] != val){
                    return false;
                }
            }
        }
        return true;
    }
    
    // Recursively constructs a Quadtree for the input grid.
    void buildQuad(vector<vector<int>>& grid, Node* root, int x, int y, int n){
        // If all elements in the current sub-grid have the same value,
        // mark the current node as a leaf and set its val to the common value.
        if(checkvalue(grid, x, y, n)){
            root->isLeaf = true;
            root->val = grid[x][y];
        }
        // If the elements in the current sub-grid have different values,
        // mark the current node as an internal node and recursively construct
        // its four child nodes.
        else{
            root->isLeaf = false;
            root->val = 1;  // Doesn't matter, since it's an internal node.
            // Construct the top-left child node.
            root->topLeft = new Node();
            buildQuad(grid, root->topLeft, x, y, n/2);
            // Construct the top-right child node.
            root->topRight = new Node();
            buildQuad(grid, root->topRight, x, y + n/2, n/2);
            // Construct the bottom-left child node.
            root->bottomLeft = new Node();
            buildQuad(grid, root->bottomLeft, x + n/2, y, n/2);
            // Construct the bottom-right child node.
            root->bottomRight = new Node();
            buildQuad(grid, root->bottomRight, x + n/2, y + n/2, n/2);
        }
    }
    
    // Constructs the Quadtree for the input grid and returns the root node.
    Node* construct(vector<vector<int>>& grid) {
        Node* root = new Node();
        int n = grid.size();  // Assume the grid is square.
        buildQuad(grid, root, 0, 0, n);  // Start building the Quadtree from the root node.
        return root;
    }
};
