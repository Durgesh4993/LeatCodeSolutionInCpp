/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return buildTree(inorder, 0, inorder.size() - 1, postorder, 0, postorder.size() - 1);
    }
    
    TreeNode* buildTree(vector<int>& inorder, int in_start, int in_end, vector<int>& postorder, int post_start, int post_end) {
        if (in_start > in_end || post_start > post_end) {
            return NULL;
        }
        int root_val = postorder[post_end];
        TreeNode* root = new TreeNode(root_val);
        int root_index = in_start;
        for (int i = in_start; i <= in_end; i++) {
            if (inorder[i] == root_val) {
                root_index = i;
                break;
            }
        }
        int left_size = root_index - in_start;
        int right_size = in_end - root_index;
        root->left = buildTree(inorder, in_start, root_index - 1, postorder, post_start, post_start + left_size - 1);
        root->right = buildTree(inorder, root_index + 1, in_end, postorder, post_end - right_size, post_end - 1);
        return root;
    }
};
