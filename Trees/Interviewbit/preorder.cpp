/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
vector<int> Solution::preorderTraversal(TreeNode* root) {
    
    vector<int> v;
     
   if (root == NULL) 
        return v; 
  
    stack<TreeNode*> st; 
    
    TreeNode* curr = root; 
  

    while (!st.empty() || curr != NULL) 
    { 
       
        while (curr != NULL) 
        { 
            // cout << curr->val << " "; 
            v.push_back(curr->val);
  
            if (curr->right) 
                st.push(curr->right); 
  
            curr = curr->left; 
        } 
          
      
        if (st.empty() == false) 
        { 
           curr = st.top(); 
           st.pop(); 
        }    
    } 
    
    return v;
    
    
}

