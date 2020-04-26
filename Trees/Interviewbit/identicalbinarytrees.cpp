/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int identicalTrees(TreeNode* a, TreeNode* b)  
{  
    /*1. both empty */
    if (a == NULL && b == NULL)  
        return 1;  
  
    /* 2. both non-empty -> compare them */
    if (a != NULL && b != NULL)  
    {  
        return
        (  
            a->val == b->val &&  
            identicalTrees(a->left, b->left) &&  
            identicalTrees(a->right, b->right)  
        );  
    }  
      
    /* 3. one empty, one not -> false */
    return 0;  
}  
 
 
int Solution::isSameTree(TreeNode* A, TreeNode* B) {
    
    return identicalTrees(A,B);
    
}

