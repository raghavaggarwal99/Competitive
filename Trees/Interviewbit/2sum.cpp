/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void solve(TreeNode* A, int B, vector<int> &ans, unordered_map<int, int> &x) {
    
    
    if(A==NULL){
        return;
    }
    
    ans.push_back(A->val);
    x[A->val]++;
    
    solve(A->left, B, ans, x);
     solve(A->right, B, ans, x);
    
    
    
    
}
int Solution::t2Sum(TreeNode* A, int B) {
    
    unordered_map<int, int> x;
    
    vector<int> ans;
    
    solve(A, B, ans, x);
    
    
    // for(int i=0; i<ans.size(); i++){
        
    //   x[ans[i]]++;
        
    // }
    
    
    for(int i=0; i<ans.size(); i++){
        
        // cout<<ans[i]<<endl;
        int v= B-ans[i];
        
        if(v==ans[i]){
            if(x[v]>=2){
                return 1;
            }
        }
        
        else if(x[v]>=1){
            return 1;
        }
        
        
    }
    
    
    return 0;
    
    
}

