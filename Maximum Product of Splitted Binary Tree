class Solution {
public:
    unordered_map<TreeNode*, pair<int, int>> mp;
    vector<long long> data;
    long long result = 0, sum = 0;
    
    long long getSum(TreeNode* root) {
        if (root == nullptr) return 0;
        sum += root->val;
        int l = getSum(root->left), r = getSum(root->right);
        mp[root] = {l, r};
        return root->val + l + r;
    }
    
    void dfs(TreeNode* root, int cur) {
        if (root == nullptr) return;
        cur += root->val;
        int l = mp[root].first, r = mp[root].second;
        dfs(root->left, cur + r);
        dfs(root->right, cur + l);
        if (l || r) {
            data.push_back(cur + l);
            data.push_back(cur + r);
        }
    }
    
    int maxProduct(TreeNode* root) {
        getSum(root);
        dfs(root, 0);
        for (auto d : data) {
            result = max(result, d * (sum - d));
        }
        return result % (long long)(1e9 + 7);
    }
};
