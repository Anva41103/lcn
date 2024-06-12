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
    int maxLevelSum(TreeNode* root) {
         int l=0, k=0, m=INT_MIN;
        if(!root) 0;
        queue <TreeNode*> q;
        q.push(root);
       while(!q.empty())
       {
        int s= q.size();
        int p=0;l++;
        for(int i=0;i<s;i++)
        {
            TreeNode* a=q.front();
            p+=q.front()->val;
            if(a->left ) q.push(a->left);
            if(a->right)q.push(a->right);
            q.pop();
        }
        if(p>m)
        {
            k=l;
            m=p;
        }
       }
       return k;

    }
};