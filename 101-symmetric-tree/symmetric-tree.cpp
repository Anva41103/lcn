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
    bool joke(TreeNode* r,TreeNode* l)
    {
        if(r==NULL||l==NULL) return r==l;
        if(r->val!=l->val) return false;
        else return joke(r->right,l->left)&&joke(r->left,l->right);
    }
    bool isSymmetric(TreeNode* root) {
        return root==NULL|| joke(root->right,root->left);
    }
};