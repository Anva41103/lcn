/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    void joke(TreeNode* root, bool isLeft, int& maxLength, int currentLength) {
        if (root == nullptr)
            return;
        maxLength = max(maxLength, currentLength);
        if (isLeft) {
            if (root->left)
                joke(root->left, false, maxLength, currentLength + 1);
            if (root->right)
                joke(root->right, true, maxLength, 1);
        } else {
            if (root->right)
                joke(root->right, true, maxLength, currentLength + 1);
            if (root->left)
                joke(root->left, false, maxLength, 1);
        }
    }

    int longestZigZag(TreeNode* root) {
        int maxLength = 0;
        joke(root, true, maxLength, 0);
        joke(root, false, maxLength, 0);
        return maxLength;
    }
};