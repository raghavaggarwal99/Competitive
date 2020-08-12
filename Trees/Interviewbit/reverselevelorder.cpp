/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int height(TreeNode* A){
    
    if(A==NULL){
        return 0;
    }
    
    return 1+ max(height(A->left), height(A->right));
    
    
} 

void reverse(TreeNode* A, int level, vector<int> &ans){
    
    if(A==NULL){
        return;
    }
    
    if(level==1){
        ans.push_back(A->val);
    }
    else if(level>1){
        reverse(A->left, level-1, ans);
        reverse(A->right, level-1, ans);
    }
    
    
    
}


 
vector<int> Solution::solve(TreeNode* A) {
    
    int h= height(A);
    
    vector<int> ans;
    
    for(int i=h; i>=1; i--){
        reverse(A, i, ans);
    }
    
    return ans;
    
    
}

