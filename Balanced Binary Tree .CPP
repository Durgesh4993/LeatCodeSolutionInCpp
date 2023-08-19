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

    bool isBalanced(TreeNode* root) {

        if (root == NULL) {
            return true;
        }
        int left_height = getHeight(root->left);
        int right_height = getHeight(root->right);
        if (abs(left_height - right_height) > 1) {
            return false;
        }
        return isBalanced(root->left) && isBalanced(root->right);
    }
    
    int getHeight(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        return max(getHeight(root->left), getHeight(root->right)) + 1;
    }
};
