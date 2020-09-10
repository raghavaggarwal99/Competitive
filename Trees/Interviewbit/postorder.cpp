/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 

vector<int> Solution::postorderTraversal(TreeNode* root) {
    
    vector<int> v;
    
    if (root == NULL) 
        return v; 
  
    stack<TreeNode *> s1, s2; 
  
    // push root to first stack 
    s1.push(root); 
    TreeNode* node; 
  
    // Run while first stack is not empty 
    while (!s1.empty()) { 

        node = s1.top(); 
        s1.pop(); 
        s2.push(node); 
  
        // Push left and right children 
        // of removed item to s1 
        if (node->left) 
            s1.push(node->left); 
        if (node->right) 
            s1.push(node->right); 
    } 
  
    // Print all elements of second stack 
    while (!s2.empty()) { 
        node = s2.top(); 
        s2.pop(); 
        v.push_back(node->val);
    } 
    
    return v;
    
}

