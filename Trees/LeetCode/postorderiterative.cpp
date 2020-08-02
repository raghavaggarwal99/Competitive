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
    vector<int> postorderTraversal(TreeNode* root) {
        
         vector<int> ans;
        if (root == NULL) 
        return ans; 

        // Create two stacks 
     
        
        stack<TreeNode *> s1, s2; 

        // push root to first stack 
        s1.push(root); 
        TreeNode* node; 

        // Run while first stack is not empty 
        while (!s1.empty()) { 
            // Pop an item from s1 and push it to s2 
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
            ans.push_back(node->val);
        } 
        
        
        return ans;
        
    }
};
