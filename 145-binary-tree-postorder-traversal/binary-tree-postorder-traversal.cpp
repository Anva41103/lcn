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
        if(root->left!=NULL) ball(root->left,temp);
        if(root->right!=NULL) ball(root->right,temp);
        temp.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector <int> temp;
        stack <TreeNode*> st1,st2;
        if(root==NULL) return {};
        st1.push(root);
        while(!st1.empty())
        {
            root= st1.top();
            st1.pop();
            st2.push(root);
            if(root->left!=NULL) st1.push(root->left);
            if(root->right!=NULL) st1.push(root->right);
        }
        while(!st2.empty())
        {
            temp.push_back(st2.top()->val);
            st2.pop();
        }
        return temp;
    }
};