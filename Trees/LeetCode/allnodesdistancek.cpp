/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    vector<int> ans;
    
    void printkdistanceNodeDown(TreeNode *root, int k) 
    { 
        // Base Case 
        if (root == NULL || k < 0)  return; 

        // If we reach a k distant node, print it 
        if (k==0) 
        { 
            cout << root->val << endl; 
            ans.push_back(root->val);
            return; 
        } 

        // Recur for left and right subtrees 
        printkdistanceNodeDown(root->left, k-1); 
        printkdistanceNodeDown(root->right, k-1); 
    } 
  
 
    int printkdistanceNode(TreeNode* root, TreeNode* target , int k) 
    { 
  
        if (root == NULL) return -1; 

    
        if (root == target) 
        { 
            printkdistanceNodeDown(root, k); 
            return 0; 
        } 

        // Recur for left subtree 
        int dl = printkdistanceNode(root->left, target, k); 

        // Check if target node was found in left subtree 
        if (dl != -1) 
        { 
             // If root is at distance k from target, print root 
             // Note that dl is Distance of root's left child from target 
             if (dl + 1 == k) {
                  ans.push_back(root->val);
                cout << root->val << endl; 
             }

             // Else go to right subtree and print all k-dl-2 distant nodes 
             // Note that the right child is 2 edges away from left child 
             else
                printkdistanceNodeDown(root->right, k-dl-2); 

             // Add 1 to the distance and return value for parent calls 
             return 1 + dl; 
        } 

        // MIRROR OF ABOVE CODE FOR RIGHT SUBTREE 
        // Note that we reach here only when node was not found in left subtree 
        int dr = printkdistanceNode(root->right, target, k); 
        
        if (dr != -1) 
        { 
             if (dr + 1 == k){
                cout << root->val << endl; 
                 ans.push_back(root->val);
             }
             else
                printkdistanceNodeDown(root->left, k-dr-2); 
            
             return 1 + dr; 
        } 

        // If target was neither present in left nor in right subtree 
        return -1; 
    } 

    
    vector<int> distanceK(TreeNode* root, TreeNode* target, int K) {
        
        
     
        printkdistanceNode(root, target, K);
        
        return ans;
        
        
        
        
        
        
        
        
    }
};
