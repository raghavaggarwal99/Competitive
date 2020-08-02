/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
int height(TreeNode* node)
{
    if (!node)
        return 0;
    if (!node->left && !node->right)
        return 1;
    
    auto l = 1 + height(node->left);
    auto r = 1 + height(node->right);
    
 
    return max(l, r);
} 
 
int Solution::maxDepth(TreeNode* A) {
    
    
    
    return height(A);
    
    
}

