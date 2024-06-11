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
    void poker(TreeNode* root, int& m, int targetSum, long long currentSum, unordered_map<long long, int>& prefixSumCount) {
        if (!root) return;
        currentSum += root->val;
        m += prefixSumCount[currentSum - targetSum];
        prefixSumCount[currentSum]++;
        poker(root->left, m, targetSum, currentSum, prefixSumCount);
        poker(root->right, m, targetSum, currentSum, prefixSumCount);
        prefixSumCount[currentSum]--;
    }
    int pathSum(TreeNode* root, int targetSum) {
        unordered_map<long long, int> prefixSumCount;
        prefixSumCount[0] = 1;
        int result=0;
        poker(root, result, targetSum, 0, prefixSumCount);
        return result;
    }
};