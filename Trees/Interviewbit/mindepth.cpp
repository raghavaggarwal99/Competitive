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
    
    
    if(node->left==NULL){
        return height(node->right) + 1; 
    }
    
     if(node->right==NULL){
        return height(node->left) + 1; 
    }
 
 
    return min(height(node->left), height(node->right))+1;
} 
 
 
int Solution::minDepth(TreeNode* A) {

    return height(A);
    
}

