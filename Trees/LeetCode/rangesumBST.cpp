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
    
    int ans;
    
      void dfs(TreeNode* node, int L, int R) {
        if (node != NULL) {
            if (L <= node->val && node->val <= R)
                ans += node->val;
            if (L < node->val)
                dfs(node->left, L, R);
            if (node->val < R)
                dfs(node->right, L, R);
        }
    }
    
    int rangeSumBST(TreeNode* root, int L, int R) {
        
         ans = 0;
        dfs(root, L, R);
        return ans;
        
        
    }
};
