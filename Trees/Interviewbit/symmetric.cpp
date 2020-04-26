/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
bool isMirror(TreeNode* root1, TreeNode* root2) 
{ 
    // If both trees are emptu, then they are mirror images 
    if (root1 == NULL && root2 == NULL) 
        return true; 
  
  
    if (root1 && root2 && root1->val == root2->val) 
        return isMirror(root1->left, root2->right) && 
               isMirror(root1->right, root2->left); 
  
    return false; 
}  
 
 
int Solution::isSymmetric(TreeNode* A) {
    
    return isMirror(A,A);
}

