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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector <vector<int> > v;
        if(root==NULL) return v;
        queue <TreeNode*> q;
        q.push(root);
        bool c=true;
        while(!q.empty())
        {
            int a=q.size();
            vector <int> rows(a);
            for(int i=0;i<a;i++)
            {
                TreeNode* temp= q.front();
                q.pop();
                int j=c?i:(a-i-1);
                rows[j]=(temp->val);
                if(temp->left!=NULL) q.push(temp->left);
                if(temp->right!=NULL) q.push(temp->right);
            }
            c=!c;
            v.push_back(rows);
        }
        return v;
    }
};