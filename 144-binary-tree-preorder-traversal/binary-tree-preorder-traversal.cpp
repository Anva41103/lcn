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
    void ball(TreeNode* root, vector <int> & temp)
    {
        if(root==NULL) return;
        temp.push_back(root->val);
        if(root->left!=NULL) ball(root->left,temp);
        if(root->right!=NULL) ball(root->right,temp);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector <int> temp;
        ball(root,temp);
        return temp;
    }
};