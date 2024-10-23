class Solution {
public:
    TreeNode* replaceValueInTree(TreeNode* root) {
        if (!root) return nullptr;

        queue<TreeNode*> q;
        q.push(root);
        root->val = 0;
        while (!q.empty()) {
            int n = q.size();
            long long levelSum = 0;
            vector<TreeNode*> currentLevel;
            for (int i = 0; i < n; i++) {
                TreeNode* node = q.front();
                q.pop();

                levelSum += (node->left ? node->left->val : 0) + (node->right ? node->right->val : 0);
                currentLevel.push_back(node);
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
            for (TreeNode* node : currentLevel) {
                long long siblingSum = 0;
                if (node->left && node->right)siblingSum = node->left->val + node->right->val;
                else if (node->left) siblingSum = node->left->val;
                else if (node->right) siblingSum = node->right->val;
                if (node->left) node->left->val = levelSum - siblingSum;
                if (node->right) node->right->val = levelSum - siblingSum;
            }
        }
        return root;
    }
};
