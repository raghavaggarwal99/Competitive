/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void solve(TreeNode* root){
    
      
  
  if (root == NULL || root->left == NULL && 
                        root->right == NULL) { 
        return; 
    } 
  
    // if root->left exists then we have  
    // to make it root->right 
    if (root->left != NULL) { 
  
        // move left recursively 
        solve(root->left); 
     
        // store the node root->right 
        struct TreeNode* tmpRight = root->right; 
        root->right = root->left; 
        root->left = NULL; 
  
        // find the position to insert 
        // the stored value    
        struct TreeNode* t = root->right; 
        while (t->right != NULL) { 
            t = t->right; 
        } 
  
        // insert the stored value 
        t->right = tmpRight; 
    } 
  
    
    solve(root->right); 
  
    
} 
 
 
TreeNode* Solution::flatten(TreeNode* root) {
  
  
  solve(root);
  
  return root;
  
  
  
  
  
  
}

