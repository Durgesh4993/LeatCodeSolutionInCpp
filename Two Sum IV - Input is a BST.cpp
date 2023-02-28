/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void helper(TreeNode* root,vector<int> &v){
    if(root==nullptr)   return;
    
    helper(root->left,v);
    v.push_back(root->val);
    helper(root->right,v);
}

bool findTarget(TreeNode* root, int k) {
    if(root==nullptr)   return 0;
    
    vector<int> v;
    helper(root,v);
    
    int i=0,j=v.size()-1;
    bool ans = 0;
    while(i<j){
        if(v[i]+v[j]>k) j--;
        else if(v[i]+v[j]<k)    i++;
        else{
            ans=1;  break;
        }
    }
    return ans;
}
};
