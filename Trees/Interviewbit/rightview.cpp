/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
void rightViewUtil(TreeNode *root,  
                   int level, int *max_level, vector<int> &ans) 
{ 
    // Base Case 
    if (root == NULL) return; 
  
    // If this is the last Node of its level 
    if (*max_level < level) 
    { 
        // cout << root->data << "\t"; 
        ans.push_back(root->val);
        *max_level = level; 
    } 
  
    // Recur for right subtree first,  
    // then left subtree 
    rightViewUtil(root->right, level + 1, max_level, ans); 
    rightViewUtil(root->left, level + 1, max_level, ans); 
} 


 
vector<int> Solution::solve(TreeNode* A) {
    
    vector<int> ans;
    int max_level = 0;
    
    rightViewUtil(A, 1, &max_level, ans); 
    
    return ans;

}

