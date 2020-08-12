/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* Solution::solve(TreeNode* root) {
    
    
    if (root==NULL) 
        return NULL; 
  
    root->left  = solve(root->left); 
    root->right = solve(root->right); 
  
    if (root->left==NULL && root->right==NULL) 
        return root; 
  
    /* if current nodes is a half node with left 
       child NULL left, then it's right child is 
       returned and replaces it in the given tree */
    if (root->left==NULL) 
    { 
        struct TreeNode *new_root = root->right; 
        free(root); // To avoid memory leak 
        return new_root; 
    } 
  
  
 
    if (root->right==NULL) 
    { 
        struct TreeNode *new_root = root->left; 
        free(root); // To avoid memory leak 
        return new_root; 
    } 
  
    return root; 
    
    
    
    
}

