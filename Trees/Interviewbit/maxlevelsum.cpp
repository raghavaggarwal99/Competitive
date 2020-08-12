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
    
    return 1+max(height(A->left), height(A->right));
    
    
} 
 
void sum(TreeNode* A, int level, int &temp){
    
    
    if(A==NULL){
        return ;
    }
    
    if(level==1){
        temp+=A->val;
    }
    else if(level>1){
        sum(A->left, level-1, temp);
        sum(A->right, level-1, temp);
    }
    
}
int Solution::solve(TreeNode* A) {
    
    
    int h=height(A);
    
    
    int ans=INT_MIN;
    
    for(int i=1; i<=h; i++){
        int temp=0;
        sum(A, i, temp);
        
        if(temp>ans){
            ans=temp;
        }
        
    }
    
    
    return ans;
    
    
    
    
    
    
    
    
    
}

