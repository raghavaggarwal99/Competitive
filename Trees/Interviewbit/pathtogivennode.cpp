/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
bool solve1(TreeNode* A, int B, vector<int> &path) {
    
    
    if(A==NULL){
        return false;
    }
    
    
   path.push_back(A->val);
   
   if(A->val==B){
       return true;
   }
    
    
    if(solve1(A->left, B, path) || solve1(A->right, B, path)){
        return true;
    }
    
    
    path.pop_back();
    
    return false;
    
    
    
    
}
 
 
vector<int> Solution::solve(TreeNode* A, int B) {
    
    
    vector<int> path;
    
    solve1(A, B, path);
    
    return path;
    
    
    
}

