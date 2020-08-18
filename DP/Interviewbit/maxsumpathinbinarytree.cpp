/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

int tree(TreeNode* root, int &res){
    
    if(root==NULL){
        return 0;
    }
    
    
    int l=tree(root->left, res);
    int r=tree(root->right, res);
    
    int max_single=max(max(l,r)+root->val, root->val);
    
    int max_top= max(max_single, l+r+root->val);
    
    res=max(res, max_top);
    
    return max_single;
 
}
 
 
int solve(TreeNode* A){
    
    int r=INT_MIN;
    
    tree(A,r);
    
    return r;

} 
 
int Solution::maxPathSum(TreeNode* A) {

    return solve(A);
    
}

