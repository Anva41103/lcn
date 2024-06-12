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
    vector<double> averageOfLevels(TreeNode* root) {
        vector <double> v;
        if(!root) return v;
        queue <TreeNode*> q;
        q.push(root);
       while(!q.empty())
       {
        int s= q.size();
        long long p=0;
        for(int i=0;i<s;i++)
        {
            TreeNode* a=q.front();
            p+=q.front()->val;
            if(a->left ) q.push(a->left);
            if(a->right)q.push(a->right);
            q.pop();
        }
        v.push_back((double)p/s);
       }
       return v;

    }
};