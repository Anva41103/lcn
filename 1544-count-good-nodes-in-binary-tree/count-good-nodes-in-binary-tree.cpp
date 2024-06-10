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
    void train(TreeNode* root, int &c,int m )
    {
        if(root==NULL) return;
        if(root->val>=m){c++;  m=root->val;}
        if(root->left) train(root->left,c,m);
        if(root->right) train(root->right,c,m);
    }
    int goodNodes(TreeNode* root) {
        if(root==NULL) return 0;
        int m= root->val;
        int c=0;
        train(root,c,m);
        return c;
    }
};