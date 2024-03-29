class Solution {
private:

    int solve(TreeNode* root,int &ans){
        // base case
        if(root == NULL){
        
            return 0;
        }



        int left = max(0,solve(root->left,ans));
        int right = max(0,solve(root->right,ans));

        int curr = root->val + left + right;
        ans = max(curr,ans);

        return root->val + max(left,right);
    }
public:
    int maxPathSum(TreeNode* root) {
        int ans = INT_MIN;
        solve(root,ans);

        return ans;
    }
};
