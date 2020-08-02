/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
bool checkSum(TreeNode* root, int sum){
    if(root == NULL){
        return 0;
    }
    
    if(root->val == sum && root->left == NULL && root->right == NULL){
        return 1;
    }
    
    return (checkSum(root->left, sum - root->val) || checkSum(root->right, sum - root->val));
}

 
 
int Solution::hasPathSum(TreeNode* A, int B) {
    
    return checkSum(A,B);
    
    
}

