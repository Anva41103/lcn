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
    int widthOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        queue <pair<TreeNode*, long long>> q;
        q.push({root,0});
        int m=0;
        while(!q.empty())
        {
            int n= q.front().second;
            int s= q.size();
            int l=0,f=0;
            for(int i=0;i<s;i++)
            {
                TreeNode* x= q.front().first;
                long long p=q.front().second-n;
                cout<<p;
                q.pop();
                if(i==0) f=p;
                if(i==s-1) l=p;
                if(x->left) q.push({x->left,2*p+1});
                if(x->right) q.push({x->right,2*p+2});
            }
            m= max(m,l-f+1);
        } 
        return m;
    }
};