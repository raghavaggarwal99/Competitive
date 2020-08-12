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
    if (node == NULL) 
        return 0; 
    else { 
        /* compute the height of each subtree */
        int lheight = height(node->left); 
        int rheight = height(node->right); 
  
        /* use the larger one */
        if (lheight > rheight) 
            return (lheight + 1); 
        else
            return (rheight + 1); 
    } 
} 

void printGivenLevel(TreeNode* root, int level, int ltr, vector<int> &temp) 
{ 
    if (root == NULL) 
        return; 
    if (level == 1) 
        temp.push_back(root->val);
        
    else if (level > 1) { 
        if (ltr) { 
            printGivenLevel(root->left, level - 1, ltr, temp); 
            printGivenLevel(root->right, level - 1, ltr, temp); 
        } 
        else { 
            printGivenLevel(root->right, level - 1, ltr, temp); 
            printGivenLevel(root->left, level - 1, ltr, temp); 
        } 
    } 
} 
 
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A) {
    
    
    int h = height(A); 
    int i; 
  
    bool ltr = true; 
    
    vector<vector<int>> ans;
    
    for (i = 1; i <= h; i++) { 
        vector<int> temp;
        
        printGivenLevel(A, i, ltr, temp); 
  
        /*Revert ltr to traverse next level in opposite order*/
        ltr = !ltr; 
        ans.push_back(temp);
    } 
    
    return ans;
    
    
    
    
}

