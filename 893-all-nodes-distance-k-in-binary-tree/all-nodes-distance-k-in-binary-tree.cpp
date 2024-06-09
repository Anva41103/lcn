/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void mp(TreeNode* root, unordered_map<TreeNode*, TreeNode*>& t) {
        if (root == NULL)
            return;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            TreeNode* c = q.front();
            q.pop();
            if (c->left) {
                t[c->left] = c;
                q.push(c->left);
            }
            if (c->right) {
                t[c->right] = c;
                q.push(c->right);
            }
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*, TreeNode*> t;
        mp(root, t);
        queue<pair<TreeNode*,int>> q;
        q.push({target,0});
        unordered_map<TreeNode*, bool> m;
        m[target] = true;
        int d = 0;
        while (!q.empty()) {
            int s = q.size();
            if (d++ == k)
                break;
            for (int i = 0; i < s; i++) {
                TreeNode* c = q.front().first;
                q.pop();
                if (c->left&&m[c->left]!=true) 
                {
                    q.push({c->left,d});
                    m[c->left]=true;
                }
                 if (c->right&&m[c->right]!=true) 
                {
                    q.push({c->right,d});
                    m[c->right]=true;
                }
                 if (t[c]&&m[t[c]]!=true) 
                {
                    q.push({t[c],d});
                    m[t[c]]=true;
                }
            }
        }
        vector <int> v;
        while(!q.empty())
        {
            v.push_back(q.front().first->val);
            q.pop();
        }
        return v;
    }
};